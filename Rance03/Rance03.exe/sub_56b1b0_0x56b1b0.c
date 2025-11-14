// 函数: sub_56b1b0
// 地址: 0x56b1b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg2 != 2)
    if (arg2 != 6)
        int32_t* edx = arg3
        
        if (arg2 == 4)
            result = sub_559cf0(arg1 + 0x3c, edx, arg4)
            
            if (result.b == 0)
                return result
            
            edx = arg3
        
        for (int32_t* i = *(arg1 + 0x50); i != *(arg1 + 0x54); i = &i[1])
            result = (***i)(arg2, edx, arg4)
            
            if (result.b == 0)
                goto label_56b22c
            
            edx = arg3
        
        int32_t* ecx_2 = *(arg1 + 0x64)
        
        if (ecx_2 != 0)
            result = (**ecx_2)(arg2, arg3, arg4)
        
        if (ecx_2 == 0 || result.b != 0)
            result.b = 1
            return result
        
    label_56b22c:
        result.b = 0
        return result
    
    int32_t* ecx_3 = *(arg1 + 0x64)
    
    if (ecx_3 != 0)
        arg2 = 6
        jump(**ecx_3)

result.b = 1
return result
