// 函数: sub_49fe60
// 地址: 0x49fe60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x148)

if (ecx != 0)
    sub_47e280(ecx, arg2)

if ((*(*(arg1 + 4) + 0x74))() != 0 && GetForegroundWindow() == arg2)
    uint32_t eax_5 = arg3 u>> 0x10
    
    if (eax_5 != 0)
        *(arg1 + 0x234) = 0
    else
        if (*(arg1 + 0x234) == eax_5.b)
            *(arg1 + 0x234) = 1
            *(arg1 + 0x238) = sub_406a00()
            return 0
        
        if (sub_406a00() - *(arg1 + 0x238) u>= *(arg1 + 0x23c))
            HICON eax_8 = LoadIconA(*(arg1 + 0x14), 0x65)
            sub_49c350(arg1 + 0x1fc, arg2, *(arg1 + 0x14), arg1, *(arg1 + 0x250), eax_8)

return 0
