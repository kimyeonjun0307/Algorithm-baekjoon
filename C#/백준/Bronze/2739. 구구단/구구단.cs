namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int A = int.Parse(Console.ReadLine());

            for (int i = 1; i < 10; i++)
            {
                int B = i * A;
                Console.WriteLine($"{A} * {i} = {B}");
            }
        }
    }
}
