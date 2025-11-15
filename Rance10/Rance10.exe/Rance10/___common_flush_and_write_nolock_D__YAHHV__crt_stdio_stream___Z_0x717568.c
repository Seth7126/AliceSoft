// 函数: ??$common_flush_and_write_nolock@D@@YAHHV__crt_stdio_stream@@@Z
// 地址: 0x717568
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi
int32_t eax = __fileno(arg2)
int32_t* eax_2

if (((arg2[3]).b & 6) == 0)
    *__errno() = 9
    eax_2 = arg2
else if (((arg2[3] u>> 0xc).b & 1) == 0)
    if (((arg2[3]).b & 1) == 0)
        goto label_7175f9
    
    arg2[2] = 0
    eax_2 = arg2
    
    if (((arg2[3] u>> 3).b & 1) != 0)
        *eax_2 = eax_2[1]
        arg2[3] &= 0xfffffffe
    label_7175f9:
        arg2[3] |= 2
        arg2[3] &= 0xfffffff7
        arg2[2] = 0
        
        if ((arg2[3] & 0x4c0) == 0)
            if (arg2 == ___acrt_iob_func(1))
            label_71763b:
                
                if (__isatty(eax) == 0)
                    ___acrt_stdio_allocate_buffer_nolock(arg2)
            else
                if (arg2 == ___acrt_iob_func(2))
                    goto label_71763b
                
                ___acrt_stdio_allocate_buffer_nolock(arg2)
        
        int32_t* __saved_esi_1 = arg2
        
        if (write_buffer_nolock<char>(arg1) != 0)
            return zx.d(arg1.b)
        
        arg2[3] |= 0x10
        return 0xffffffff
else
    *__errno() = 0x22
    eax_2 = arg2

eax_2[3] |= 0x10
return 0xffffffff
