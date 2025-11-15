// 函数: ?Cleanup@ExternalContextBase@details@Concurrency@@AAEXXZ
// 地址: 0x6fbe45
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6f3861(arg1)
HANDLE hObject = *(arg1 + 0xa4)

if (hObject != 0)
    CloseHandle(hObject)
    *(arg1 + 0xa4) = 0

HANDLE hObject_1 = *(arg1 + 0xa8)

if (hObject_1 != 0)
    CloseHandle(hObject_1)

SLIST_ENTRY* eax = *(arg1 + 0xa0)

if (eax != 0)
    sub_6f272b(eax)

void* result = *(arg1 + 0x9c)
*(arg1 + 0x9c) = 0
*(result + 0x18) = 0
return result
