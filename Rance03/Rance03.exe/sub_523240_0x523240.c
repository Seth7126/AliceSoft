// 函数: sub_523240
// 地址: 0x523240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
*(arg1 + 0x10) = *(arg1 + 0xc)
int32_t* edi = *(arg1 + 4)
int32_t* i = *edi

while (i != edi)
    void* eax_1 = i[5]
    
    if (eax_1 != 0 && *(eax_1 + 0x5c) != 0 && *(eax_1 + 0x20) s> 0)
        sub_412de0(arg1 + 0xc, &i[5])
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i

int32_t* edx = *(arg1 + 0x10)
int32_t* ecx_2 = *(arg1 + 0xc)
var_4.b = 0
int32_t eax_4 = (edx - ecx_2) s>> 2
return sub_5235e0(eax_4, edx, ecx_2, eax_4, var_4)
