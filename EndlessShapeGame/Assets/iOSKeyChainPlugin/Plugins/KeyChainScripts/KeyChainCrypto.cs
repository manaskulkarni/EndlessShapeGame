using UnityEngine;
using System;
using System.IO;
using System.Text;
using System.Security.Cryptography;

public class KeyChainCrypto
{
    private static void GetKeys(string secret, out byte[] key, out byte[] iv)
    {
        byte[] secretBytes = Encoding.UTF8.GetBytes(secret);
        key = new byte[8];
        iv = new byte[8];
        for (int i = 0; i < key.Length; i++)
        {
            if (secretBytes.Length <= i)
                key[i] = secretBytes[secretBytes.Length - 1];
            else
                key[i] = secretBytes[i];
        }
        for (int i = 0; i < iv.Length; i++)
        {
            if (secretBytes.Length - 1 - i < 0)
                iv[i] = secretBytes[0];
            else
                iv[i] = secretBytes[secretBytes.Length - 1 - i];
        }
    }
    public static string Crypt(string text, string secret)
    {
        byte[] key, iv;
        GetKeys(secret, out key, out iv);
        SymmetricAlgorithm algorithm = DES.Create();
        ICryptoTransform transform = algorithm.CreateEncryptor(key, iv);
        byte[] inputbuffer = Encoding.Unicode.GetBytes(text);
        byte[] outputBuffer = transform.TransformFinalBlock(inputbuffer, 0, inputbuffer.Length);
        return Convert.ToBase64String(outputBuffer);
    }
    public static string Decrypt(string text, string secret)
    {
        byte[] key, iv;
        GetKeys(secret, out key, out iv);
        SymmetricAlgorithm algorithm = DES.Create();
        ICryptoTransform transform = algorithm.CreateDecryptor(key, iv);
        byte[] inputbuffer = Convert.FromBase64String(text);
        byte[] outputBuffer = transform.TransformFinalBlock(inputbuffer, 0, inputbuffer.Length);
        return Encoding.Unicode.GetString(outputBuffer);
    }
}