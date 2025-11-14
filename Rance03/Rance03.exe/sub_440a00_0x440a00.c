// 函数: sub_440a00
// 地址: 0x440a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result

if (arg2 != 0 && (*(*arg2 + 8))(0) == 0xa && sub_440b10(arg2).b != 0)
    *(arg1 + 4) = *(*(*arg2 + 0xc))(0)
    result = (*(*arg2 + 0x14))(1)
    
    if (result != 0 && sub_4401d0(arg1 + 8, result).b != 0)
        result = (*(*arg2 + 0x1c))(2)
        
        if (result != 0 && sub_440c40(arg1 + 0x20, result).b != 0)
            *(arg1 + 0x2c) = *(*(*arg2 + 0xc))(3)
            *(arg1 + 0x30) = *(*(*arg2 + 0xc))(4)
            *(arg1 + 0x34) = *(*(*arg2 + 0xc))(5)
            *(arg1 + 0x38) = *(*(*arg2 + 0xc))(6)
            *(arg1 + 0x3c) = *(*(*arg2 + 0xc))(7)
            result = (*(*arg2 + 0x1c))(8)
            
            if (result != 0 && sub_440ba0(arg1 + 0x40, result).b != 0)
                result = (*(*arg2 + 0x1c))(9)
                
                if (result != 0 && sub_440ba0(arg1 + 0x4c, result).b != 0)
                    result.b = 1
                    return result

result.b = 0
return result
