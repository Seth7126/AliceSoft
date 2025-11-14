// 函数: sub_60c330
// 地址: 0x60c330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result_1 = arg1
int32_t* ecx = arg1[0xe]
int32_t* result

if (ecx != 0)
    result = arg1[0xf]
    
    if (result != 0)
        int32_t esi
        int32_t var_c_1 = esi
        int32_t esi_1 = arg1[0x11]
        arg1[0x16] = 0
        result_1 = result
        (*(*ecx + 0x84))(ecx, 1, &result_1, esi_1)
        arg1[0x12] = __return_addr
        arg1[0x13] = esi_1
        sub_60d3f0(arg1)
        
        if ((*(*arg1 + 0xbc))(0).b != 0 && (*(*arg1 + 0xc4))(0).b != 0
                && (*(*arg1 + 0xc8))(0).b != 0 && (*(*arg1 + 0xcc))(1).b != 0)
            return (*(*arg1 + 0xc0))(0, 0) != 0

result.b = 0
return result
