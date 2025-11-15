// 函数: sub_4a0290
// 地址: 0x4a0290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcbbc
char eax_1

if (edi != 0)
    eax_1 = sub_63c080(edi)

if (edi == 0 || eax_1 == 0 || *(edi + 0x40) == 0)
    enum MESSAGEBOX_RESULT eax_4
    
    if (*(arg1 + 0x88) != 0)
        void** lpCaption = *(arg1 + 0x10) + 0x48
        
        if (lpCaption[5] u>= 0x10)
            lpCaption = *lpCaption
        
        eax_4 = MessageBoxA(arg2, 0x7610fc, lpCaption, 0x24)
    
    if (*(arg1 + 0x88) == 0 || eax_4 == IDYES)
        *(arg1 + 0x34) = 0
        PostMessageA(**(arg1 + 0x10), 0x7fff, 0, 0)
else if (data_7fcbbc != 0)
    sub_63c7e0(7)

return 0
