// 函数: sub_412140
// 地址: 0x412140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result_1 = arg1
void* result = (*(**(arg1 + 0x50) + 0x2c))()
int32_t ecx_1 = *(arg1 + 0x68)

if (result s< ecx_1)
    if (data_75d4b4 == 0)
        (*(**(arg1 + 0x48) + 4))()
        data_75d4b4 = 1
    
    goto label_4121a6

if (result == ecx_1)
    int32_t arg_4
    (***(arg1 + 0x3c))(&arg_4, &result_1, arg_4)
    
    if (arg_4 != 0xffffffff)
        result = result_1
        
        if (result != 0xffffffff && *(arg1 + 0x64) != result)
            sub_414390(arg1 + 0x40)
        label_4121a6:
            *(arg1 + 0x5c) = 0
            sub_404e00(arg1 + 0x70, 1)
            (*(*(arg1 + 8) + 4))(*(arg1 + 0x7c), 1)

result.b = 1
return result
