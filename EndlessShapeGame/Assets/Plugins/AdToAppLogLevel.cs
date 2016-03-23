using System;

namespace AdToApp
{
    [Flags]
    public enum AdToAppLogLevel
    {
        Off = 0,
        Fatal = 1 << 0,
        Error = 1 << 1,
        Warn = 1 << 2,
        Debug = 1 << 3,
        Verbose = 1 << 4
    };
}
