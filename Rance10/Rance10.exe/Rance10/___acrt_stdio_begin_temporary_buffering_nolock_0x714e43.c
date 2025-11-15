// 函数: ___acrt_stdio_begin_temporary_buffering_nolock
// 地址: 0x714e43
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (__isatty(__fileno(arg1)) != 0)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t* edi_1
    
    if (arg1 != ___acrt_iob_func(1))
        if (arg1 == ___acrt_iob_func(2))
            edi_1 = &data_7fc714
            goto label_714e8d
        
        result.b = 0
    else
        edi_1 = &data_7fc710
    label_714e8d:
        data_7fc47c += 1
        
        if ((arg1[3] & 0x4c0) != 0)
            result.b = 0
        else
            arg1[3] |= 0x282
            result = *edi_1
            
            if (result != 0)
            label_714ed8:
                arg1[1] = result
                *arg1 = *edi_1
                arg1[2] = 0x1000
                arg1[6] = 0x1000
            else
                *edi_1 = __malloc_base(0x1000)
                __free_base(0)
                result = *edi_1
                
                if (result != 0)
                    goto label_714ed8
                
                arg1[2] = 2
                arg1[1] = &arg1[5]
                *arg1 = &arg1[5]
                arg1[6] = 2
            
            result.b = 1
else
    result.b = 0

return result
