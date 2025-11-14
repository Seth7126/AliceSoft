// 函数: sub_405c90
// 地址: 0x405c90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (*(*arg2 + 4))()

if ((*(*arg1 + 4))() s< eax_1)
    return (**arg2)(arg1)

if (arg4 == 0)
    int32_t eax_20
    
    if (arg3 == 0)
        eax_20 = *arg2
    else
        if (*arg3 == 0)
            *arg3 = arg2
            return arg1
        
        int32_t eax_18 = (*(*arg2 + 4))()
        bool cond:0_1 = (*(*arg1 + 4))() != eax_18
        eax_20 = *arg2
        
        if (not(cond:0_1))
            return (*eax_20)(arg1)
    
    (*(eax_20 + 8))(1)
else
    if (arg3 != 0 && *arg3 == 0)
        *arg3 = arg2
        return arg1
    
    if (*arg4 == 0)
        *arg4 = arg2
        return arg1
    
    int32_t eax_9 = (*(*arg2 + 4))()
    
    if ((*(*arg1 + 4))() == eax_9)
        return (**arg2)(arg1)
    
    int32_t eax_14 = (***arg4)(arg2)
    *arg4 = eax_14
    
    if (eax_14 != 0)
        return arg1

(*(*arg1 + 8))(1)
return 0
