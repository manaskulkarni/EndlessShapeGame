// Written by Aji Suprana
// Modified for Just Flick

using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class Dummy : MonoBehaviour
{
  public virtual void Awake() { }
  public virtual void OnDestroy() { }
}

public class Message<T> : System.EventArgs
{
  public Message(T a)
  {
    Data = a;
  }

  private T Data;
  public T data { get { return Data; } }
}

public class CubiBase : Dummy
{

  public static HashSet<GameObject> Observer = new HashSet<GameObject>();
  public static Dictionary<string, EventHandler> events = new Dictionary<string, EventHandler>();
  private Dictionary<string, EventHandler> currentRegistered = new Dictionary<string, EventHandler>();

  public void RegisterEvent(string functionName,EventHandler handler)
  {
    if(!events.ContainsKey(functionName))
    {
      events.Add(functionName, handler);
    }
    else
    {
      events[functionName] += handler;
    }
    currentRegistered.Add(functionName, handler);
  }

  public void UnregisterEvent(string fn,EventHandler handler)
  {
    if (!events.ContainsKey(fn))
    {
      return;
    }
    else
    {
      events[fn] -= handler;
    }
    currentRegistered.Remove(fn);
  }

  public void UnregisterAll ()
  {
    events.Clear ();
    currentRegistered.Clear ();
    Observer.Clear ();
  }

  public void InvokeMessage(object sender, string fun, System.EventArgs msg = null)
  {
    if (!events.ContainsKey(fun))
    {
#if UNITY_EDITOR
      Debug.LogWarning(fun + " event has never been registered! Hint: some unnecessary invokemessage call that does nothing exist, Clean it up!");
#endif
      return;
    }

    //Will not invoke listener that is disabled
    if (enabled != true)
      return;

    events[fun](sender, msg);
  }

  public void InvokeMessage (string fun, System.EventArgs msg = null)
  {
    InvokeMessage (this, fun, msg);
  }

  public void InvokeMessage<T>(object sender,string fun, T msg)
  {
    if(!events.ContainsKey(fun))
    {
#if UNITY_EDITOR
      Debug.LogError(fun + " event has never been registered! Hint: some unnecessary invokemessage call that does nothing exist, Clean it up!");
#endif
      return;
    }

    //Will not invoke listener that is disabled
    if (enabled != true)
      return;

    Message<T> gMSG = new Message<T>(msg);
    events[fun](sender, gMSG);
  }

  public void InvokeMessageDontRequireReceiver(object sender, string fun, System.EventArgs msg = null)
  {
    if (!events.ContainsKey(fun))
      return;

    //Will not invoke listener that is disabled
    if (enabled != true)
      return;

    events[fun](sender, msg);
  }

  public void InvokeMessageDontRequireReceiver<T>(object sender,string fun, T msg)
  {
    if(!events.ContainsKey(fun))
      return;

    //Will not invoke listener that is disabled
    if (enabled != true)
      return;

    Message<T> gMSG = new Message<T>(msg);
    events[fun](sender, gMSG);
  }

  // Call from GUI for convenience
  public void InvokeMessageGUI (string fun)
  {
    InvokeMessage (this, fun);
  }

  public sealed override void Awake()
  {
    Observer.Add(gameObject);
    cubiAwake();
  }


  public sealed override void OnDestroy()
  {
    //if this component is the last existing component, then un-list current gameobject as listener
    if(gameObject.GetComponents<CubiBase>().Length == 1)
    {
      //print( gameObject.name + " has been unlist from listener");
      Observer.Remove(gameObject);
    }

    //Destroy all registered event
    foreach (var h in currentRegistered)
    {
      events[h.Key] -= h.Value;
    }
    cubiOnDestroy();
  }

  public virtual void cubiAwake()
  {

  }

  public virtual void cubiOnDestroy()
  {

  }

}
