namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int A = int.Parse(Console.ReadLine());

            if (A > 89)
                Console.WriteLine("A");
            else if (A < 90 && 79 < A)
                Console.WriteLine("B");
            else if (A < 80 && 69 < A)
                Console.WriteLine("C");
            else if (A < 70 && 59 < A)
                Console.WriteLine("D");
            else
                Console.WriteLine("F");
        }
    }
}