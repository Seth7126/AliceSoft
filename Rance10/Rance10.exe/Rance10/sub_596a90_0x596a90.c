// 函数: sub_596a90
// 地址: 0x596a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s>= 0)
    if (arg2 s<= 5)
        if (sub_58ed00(arg1 + 0x70, arg2) != 0)
            (*(*arg4 + 0xc0))(0)
            __Smtx_lock_shared(arg1 + 0x6c)
            void* esi_1 = *(arg1 + 0x68)
            __Smtx_unlock_shared(arg1 + 0x6c)
            
            if (sub_58f1b0(esi_1 + 0x4c) != 0 && sub_58ed40(arg1 + 0x70, arg2, arg3, arg4) != 0)
                if (*(arg1 + 0x24c) == 0 || arg2 != 0 || *(arg1 + 0x274) s<= arg2)
                    return true
                
                if ((**(arg1 + 0x268))(arg2, arg3, arg4) != 0)
                    return true
            
            return false
    else if (arg2 == 6)
        (*(*arg4 + 0xc0))(0)
        return sub_570da0(arg1 + 0x250, arg3, arg4) != 0

return 1
