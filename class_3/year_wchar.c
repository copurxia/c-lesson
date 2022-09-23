#include <stdio.h>
#include <locale.h>

int main() {
	int year;
    setlocale(LC_ALL,"zh_CN");
	wchar_t dayti[] = L"一二三四五六日";
	if (scanf("%d", &year)) {
        year--;
		int oud = (year * 365 + year / 4 - year / 100 + year / 400+1) % 7;
		wprintf(L"星期%lc", dayti[oud]);
        //未正常工作
	}
}
