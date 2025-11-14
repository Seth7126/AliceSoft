// 函数: sub_61af80
// 地址: 0x61af80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x28) = *(arg1 + 0x24)
int32_t* ecx = *(arg1 + 0x20)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0x20) = 0

int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    *(arg1 + 0xc) = 0

int32_t* arg_8
int32_t* edi = arg_8
*(arg1 + 0x14) = *(arg1 + 0x10)
void* eax_3

if (edi s> 0)
    int32_t* ecx_2 = *(*(arg1 + 8) + 0x34)
    
    if (ecx_2 != 0)
        arg_8 = nullptr
        eax_3 = (*(*ecx_2 + 0x30))(ecx_2, arg2, edi, 0, &arg_8)
        ecx_2 = arg_8
        
        if (eax_3 s< 0)
            ecx_2 = nullptr
    
    *(arg1 + 0xc) = ecx_2
    
    if (ecx_2 != 0)
        sub_403540(arg1 + 0x10, edi)
        sub_69d850(*(arg1 + 0x10), arg2, edi)
        
        if (sub_60e3e0(arg1 + 0x1c, arg3, arg2, edi, *(*(arg1 + 8) + 0x34)).b != 0)
            sub_4a6db0(arg1 + 0x24, arg3)
            int32_t* eax_7
            eax_7.b = 1
            return eax_7

eax_3.b = 0
return eax_3
