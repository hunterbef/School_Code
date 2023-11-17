//Hunter Befort
//1001181638
//OpenJDK 17.0.5
//macOS Ventura 13.5.1

import java.io.File;

public class hxb_lab01
{
    public static long dirSize(File dir)
    {
        long sum = 0;
        for(File item : dir.listFiles())        //parses through all files in the directory
        {
            if(item.isFile())                   //if the current item is a file...
            {
                sum += item.length();               //add the size of it to the directory size sum
            }
            else if(item.isDirectory())         //if the current item is a subdirectory...
            {
                sum += dirSize(item);               //recurse through the subdirectory, add its total size to the directory size sum
            }
        }
        return sum;
    }

    public static void main(String[] args)
    {
        File dir = new File(".");
        System.out.println("Size of directory: " + dirSize(dir) + " bytes");
    }
}