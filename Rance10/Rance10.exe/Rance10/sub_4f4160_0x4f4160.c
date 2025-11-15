// 函数: sub_4f4160
// 地址: 0x4f4160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x68)

if (result != 0)
label_4f41a9:
    
    if (arg2 != 0)
        void* esi_1 = result[1]
        void* edi_2 = *(arg2 + 0x40)
        result = sub_4f2400(esi_1 + 0x64, edi_2)
        
        if (result.b != 0)
            return sub_504200(*(esi_1 + 0x70), edi_2)
else
    if (*(arg1 + 0x5c) == *(arg1 + 0x60))
        void* eax_1 = sub_404080(arg1 + 0x30)
        sub_4f4360(arg1, sub_404080(arg1 + 0x30), eax_1, 0)
    
    result = *(*(arg1 + 0x5c) + ((*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2 << 2) - 4)
    
    if (result != 0)
        goto label_4f41a9

return result
