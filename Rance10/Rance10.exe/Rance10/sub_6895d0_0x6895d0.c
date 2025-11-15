// 函数: sub_6895d0
// 地址: 0x6895d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0xc) = 0

int32_t* arg_8
int32_t* ebx = arg_8
*(arg1 + 0x14) = *(arg1 + 0x10)
void* eax_2

if (ebx s> 0)
    int32_t* ecx_1 = *(*(arg1 + 8) + 0x34)
    
    if (ecx_1 != 0)
        arg_8 = nullptr
        eax_2 = (*(*ecx_1 + 0x3c))(ecx_1, arg2, ebx, 0, &arg_8)
        ecx_1 = arg_8
        
        if (eax_2 s< 0)
            ecx_1 = nullptr
    
    *(arg1 + 0xc) = ecx_1
    
    if (ecx_1 != 0)
        sub_405950(arg1 + 0x10, ebx)
        sub_700660(*(arg1 + 0x10), arg2, ebx)
        char* eax_5
        eax_5.b = 1
        return eax_5

eax_2.b = 0
return eax_2
