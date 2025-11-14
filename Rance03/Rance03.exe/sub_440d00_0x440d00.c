// 函数: sub_440d00
// 地址: 0x440d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result

if (arg2 != 0 && (*(*arg2 + 8))(0) == 0xa && sub_440b10(arg2).b != 0
        && (*(*arg2 + 0x20))(0, *(arg1 + 4)).b != 0)
    void* ecx_3 = arg1 + 8
    
    if (*(arg1 + 0x1c) u>= 0x10)
        ecx_3 = *ecx_3
    
    if ((*(*arg2 + 0x28))(1, ecx_3).b != 0)
        result = (*(*arg2 + 0x1c))(2)
        
        if (result != 0 && sub_440ee0(arg1 + 0x20, result).b != 0
                && (*(*arg2 + 0x20))(3, *(arg1 + 0x2c)).b != 0
                && (*(*arg2 + 0x20))(4, *(arg1 + 0x30)).b != 0
                && (*(*arg2 + 0x20))(5, *(arg1 + 0x34)).b != 0
                && (*(*arg2 + 0x20))(6, *(arg1 + 0x38)).b != 0
                && (*(*arg2 + 0x20))(7, *(arg1 + 0x3c)).b != 0)
            result = (*(*arg2 + 0x1c))(8)
            
            if (result != 0 && sub_440e30(arg1 + 0x40, result).b != 0)
                result = (*(*arg2 + 0x1c))(9)
                
                if (result != 0 && sub_440e30(arg1 + 0x4c, result).b != 0)
                    result.b = 1
                    return result

result.b = 0
return result
