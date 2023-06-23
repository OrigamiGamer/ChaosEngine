using System;

class Test
{
    static void Main(string[] args)
    {
        StreamReader streamReader = new StreamReader("./Program.cs");
        Console.WriteLine(streamReader.ReadToEnd());
        Console.WriteLine("麻了");
    }
}
