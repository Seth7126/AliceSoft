// 函数: sub_47ddc0
// 地址: 0x47ddc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(arg1 + 0x28)

if (ecx != 0xffffffff)
    void* edx_1 = data_75d508
    void* edi_1
    
    if (ecx s>= 0 && ecx s< (*(edx_1 + 0x54) - *(edx_1 + 0x50)) s>> 2)
        edi_1 = *(*(edx_1 + 0x50) + (ecx << 2))
    
    if (ecx s< 0 || ecx s>= (*(edx_1 + 0x54) - *(edx_1 + 0x50)) s>> 2 || edi_1 == 0)
        sub_455870(0x6ddc38)
        int32_t* eax_9
        eax_9.b = 0
        return eax_9
    
    int32_t* ecx_1 = *(edx_1 + 0x5c)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0xc))(*(edi_1 + 8))
    
    if (sub_526eb0(*(arg1 + 0x28)) == 0)
        sub_455870(0x6ddc74)
        int32_t* eax_7
        eax_7.b = 0
        return eax_7
    
    *(arg1 + 0x28) = 0xffffffff

sub_505830(arg1 + 8)
struct _EXCEPTION_REGISTRATION_RECORD** eax_8
eax_8.b = 1
return eax_8
