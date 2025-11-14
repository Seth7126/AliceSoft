// 函数: sub_6086f0
// 地址: 0x6086f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result_1
void arg_4
sub_420040(arg1 + 0x2c, &result_1, &arg_4)
int32_t* result = result_1

if (result != *(arg1 + 0x2c) && result[7] != 0)
    int32_t ecx_1 = result[5]
    
    if (ecx_1 == 0)
        int32_t ecx_9 = *(arg1 + 4)
        
        if (ecx_9 == 1)
            return sub_6087a0(arg1, &result[5], arg2)
        
        if (ecx_9 == 2)
            return sub_6089e0(arg1, &result[5], arg2)
    else if (ecx_1 == 1)
        int32_t ecx_4 = *(arg1 + 4)
        
        if (ecx_4 == 1)
            return sub_6088a0(arg1, &result[5], arg2)
        
        if (ecx_4 == 2)
            return sub_608a40(arg1, &result[5], arg2)

result.b = 0
return result
