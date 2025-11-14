// 函数: sub_4cc730
// 地址: 0x4cc730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg2
struct partsengine::CPartsList::VTable** result = sub_4a52a0(arg1 + 0x104)
struct partsengine::CPartsList::VTable** result_1 = result
struct partsengine::CPartsList::VTable** result_2

if (result_1 == 0)
    result_2 = nullptr
else
    int32_t esi_1 = result_1[2]
    
    if (arg2 s< esi_1)
        result_2 = nullptr
    else
        result = result_1[1] + esi_1
        
        if (result s<= arg2)
            result_2 = nullptr
        else
            result = result_1[3]
            result_2 = result[arg2 - esi_1]
            
            if (result_2 == 0)
                result = sub_4e7720(result_1, arg2)
                result_2 = result

int32_t* ecx_4 = result_2[0x17]

if (ecx_4 != 0)
    result = (*(*ecx_4 + 8))(1)
    
    if (result == 9)
        return (**(sub_4a3f80(result_2) + 0x2c))()

return result
