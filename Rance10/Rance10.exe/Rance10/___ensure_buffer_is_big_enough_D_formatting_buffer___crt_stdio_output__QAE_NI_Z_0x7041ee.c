// 函数: ??$ensure_buffer_is_big_enough@D@formatting_buffer@__crt_stdio_output@@QAE_NI@Z
// 地址: 0x7041ee
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t edi
int32_t var_10 = edi
int32_t* result

if ((divu.dp.d(0:0xffffffff, arg2) & 0xfffffffe) u>= 2)
    char ebx_1 = 0
    uint32_t esi_1 = arg2 * 2
    
    if (*(arg1 + 0x404) != 0)
        if (esi_1 u> *(arg1 + 0x400))
            goto label_70423b
        
        result.b = 1
    else if (esi_1 u<= 0x400 || esi_1 u<= *(arg1 + 0x400))
        result.b = 1
    else
    label_70423b:
        void* eax_2 = __malloc_base(esi_1)
        var_8 = eax_2
        
        if (eax_2 != 0)
            __crt_unique_heap_ptr<wchar_t,struct __crt_internal_free_policy>::operator=(
                arg1 + 0x404, &var_8)
            eax_2 = var_8
            ebx_1 = 1
            *(arg1 + 0x400) = esi_1
        
        __free_base(eax_2)
        result.b = ebx_1
else
    *__errno() = 0xc
    result.b = 0

return result
