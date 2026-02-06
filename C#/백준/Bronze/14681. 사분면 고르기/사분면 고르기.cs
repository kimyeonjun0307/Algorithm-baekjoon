namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int A = int.Parse(Console.ReadLine());
            int B = int.Parse(Console.ReadLine());

            if (A > 0 && B > 0)
            {
                Console.WriteLine("1");
            }
            else if (A > 0 && B < 0)
            {
                Console.WriteLine("4");
            }
            else if (A < 0 && B < 0)
            {
                Console.WriteLine("3");
            }
            else if (A != 0)
            {
                Console.WriteLine("2");
            }
        }
    }
}