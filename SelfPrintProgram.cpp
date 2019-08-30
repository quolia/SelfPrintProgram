#include <iostream.h>
char strings[50][200] = {
"#include <iostream.h>",
"char strings[50][200] = {",
"};",
"void main()",
"{",
"    for(int i=0;i<14;i++)",
"    {",
"        cout << strings[i] << char(10);",
"        if(i == 1)",
"            for(int n=0;n<14;n++)",
"                cout << char(34) << strings[n] << char(34) << ',' << char(10);",
"    }",
"    cin >> i;",
"}",
};
void main()
{
	for(int i=0;i<14;i++)
	{
		cout << strings[i] << char(10);
		if(i == 1)
			for(int n=0;n<14;n++)
				cout << char(34) << strings[n] << char(34) << ',' << char(10);
	}
	cin >> i;
}