// 函数: sub_4f59e0
// 地址: 0x4f59e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t* result = sub_4a89a0(data_75d4fc + 0x174, arg1)
int32_t* result_1 = result

if (result_1 != 0)
    int32_t var_10_1 = arg2
    result = sub_4aaa40(sub_4a3ac0(result_1[0x27]) + 0xb4)
    
    if (result_1[0x4a] != arg2)
        int32_t* ecx_4 = result_1[0x5d]
        result_1[0x4a] = arg2
        
        if (ecx_4 != 0)
            return (**ecx_4)()

return result
