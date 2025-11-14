// 函数: sub_5ff930
// 地址: 0x5ff930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* edi = data_75d528
int32_t* result

if (data_75d534 != 0)
    int32_t var_10_1 = ecx
    int32_t* esi_1 = sub_6203f0()
    
    if (esi_1 != 0)
        result = (**esi_1)(0x6eba80)
        
        if (result != 0)
            (**result)(edi + 4)
            
            if ((**esi_1)(0x6eba90) != 0)
                *(*(edi + 0x40) + 0x94) = edi + 0x14
                *(*(edi + 0x40) + 0x98) = edi + 0xc
                void* var_10_3 = edi + 0x44
                return sub_600510(*(edi + 0x40), edi + 0xc, *(edi + 0x5c), edi + 0x28) != 0

result.b = 0
return result
