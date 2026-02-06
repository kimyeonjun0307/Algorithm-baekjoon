namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int A = int.Parse(Console.ReadLine());

            if (A % 4 == 0 && A % 100 != 0)
                Console.WriteLine("1");
            else if (A % 400 == 0)
                Console.WriteLine("1");
            else
                Console.WriteLine("0");

        }
    }
}
