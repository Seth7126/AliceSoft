// 函数: sub_5cea10
// 地址: 0x5cea10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t edi = **(arg1 + 0x234)
int32_t eax_3 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
void* edx

if (edi u< eax_3)
    eax_3 = *(arg1 + 0x174)
    edx = *(eax_3 + (edi << 2))
    
    if (edx != 0)
        char* edx_1
        
        if (*(edx + 0xc) != 0)
            edx_1 = *(edx + 8)
        else
            edx_1 = nullptr
        
        void* ecx
        
        if (*edx_1 != 0)
            char* ecx_1 = edx_1
            
            do
                eax_3.b = *ecx_1
                ecx_1 = &ecx_1[1]
            while (eax_3.b != 0)
            
            ecx = ecx_1 - &ecx_1[1]
        else
            ecx = nullptr
        
        sub_402110(arg2, edx_1, ecx)
        int32_t eax_4
        int32_t ecx_4
        int32_t edx_2
        eax_4, ecx_4, edx_2 = sub_5d5e80(arg1 + 0x16c, edi)
        
        if (eax_4.b != 0)
            eax_4.b = 1
            return eax_4
        
        int32_t var_14_2 = 0x6e9fc0
        sub_5c2400(eax_4, edx_2, ecx_4, arg1, arg3)
        int32_t eax_5
        eax_5.b = 0
        return eax_5

int32_t var_14_3 = edi
int32_t var_18_2 = 0x6e9ff0
sub_5c2400(eax_3, edx, arg1, arg1, arg3)
int32_t eax_6
eax_6.b = 0
return eax_6
