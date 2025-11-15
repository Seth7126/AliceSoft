// 函数: sub_5dd460
// 地址: 0x5dd460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* i = *arg1

for (int32_t edi = arg1[1]; i != edi; i = &i[2])
    int32_t* ebx_1 = *i
    
    if (ebx_1 != 0)
        __Smtx_lock_shared(&ebx_1[1])
        int32_t ebp_1 = *ebx_1
        __Smtx_unlock_shared(&ebx_1[1])
        char eax
        
        if (ebp_1 != 0)
            __Smtx_lock_shared(&ebx_1[1])
            int32_t* ebx_2 = *ebx_1
            __Smtx_unlock_shared(&ebx_1[1])
            eax = (*(*ebx_2 + 0x10))()
        
        if (ebp_1 == 0 || eax == 0)
            return 0

return 1
