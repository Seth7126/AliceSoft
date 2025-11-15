// 函数: sub_5d7090
// 地址: 0x5d7090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(&arg1[3])
int32_t esi = arg1[2]
__Smtx_unlock_shared(&arg1[3])

if (esi != 0)
    __Smtx_lock_shared(&arg1[3])
    int32_t* esi_1 = arg1[2]
    __Smtx_unlock_shared(&arg1[3])
    
    if ((*(*esi_1 + 0x10))() != 0 && arg1[0x97].b == 0)
        __Smtx_lock_shared(&arg1[3])
        int32_t esi_2 = arg1[2]
        __Smtx_unlock_shared(&arg1[3])
        
        if (esi_2 != 0)
            __Smtx_lock_shared(&arg1[3])
            int32_t* esi_3 = arg1[2]
            __Smtx_unlock_shared(&arg1[3])
            
            if ((*(*esi_3 + 0x34))() != 0)
                int32_t* ecx_2 = *arg1
                arg1[0x97].b = 1
                int32_t* var_10_8 = ecx_2
                
                if ((*(*ecx_2 + 0x68))(0xffffffff, 0x3f800000) != 0 && (*(**arg1 + 0xc8))(1) != 0)
                    return (*(**arg1 + 0xcc))(1) != 0

return 0
