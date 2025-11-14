// 函数: __ungetc_nolock
// 地址: 0x6a9e3c
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2[3].b & 0x40) != 0)
label_6a9ec0:
    
    if (arg1 != 0xffffffff)
        if ((arg2[3].b & 1) != 0)
        label_6a9eda:
            
            if (arg2[2] == 0)
                __getbuf(arg2)
            
            int32_t eax_7 = *arg2
            
            if (eax_7 != arg2[2])
                goto label_6a9ef3
            
            if (arg2[1] == 0)
                *arg2 = eax_7 + 1
            label_6a9ef3:
                *arg2 -= 1
                char* eax_9 = *arg2
                
                if ((arg2[3].b & 0x40) == 0)
                    *eax_9 = arg1.b
                label_6a9f08:
                    int32_t eax_11 = arg2[3]
                    arg2[1] += 1
                    arg2[3] = (eax_11 & 0xffffffef) | 1
                    return zx.d(arg1.b)
                
                if (*eax_9 == arg1.b)
                    goto label_6a9f08
                
                *arg2 = &eax_9[1]
        else if ((arg2[3].b & 0x80) != 0 && (arg2[3].b & 2) == 0)
            goto label_6a9eda
else
    int32_t eax_1 = __fileno(arg2)
    void* edx_4
    
    if (eax_1 == 0xffffffff || eax_1 == 0xfffffffe)
        edx_4 = &data_74a630
    else
        edx_4 = ((eax_1 & 0x1f) << 6) + (&data_75ca40)[eax_1 s>> 5]
    
    void* ecx_4
    
    if ((*(edx_4 + 0x24) & 0x7f) == 0)
        if (eax_1 == 0xffffffff || eax_1 == 0xfffffffe)
            ecx_4 = &data_74a630
        else
            ecx_4 = ((eax_1 & 0x1f) << 6) + (&data_75ca40)[eax_1 s>> 5]
    
    if ((*(edx_4 + 0x24) & 0x7f) == 0 && (*(ecx_4 + 0x24) & 0x80) == 0)
        goto label_6a9ec0
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return 0xffffffff
