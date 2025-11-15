// 函数: sub_57af50
// 地址: 0x57af50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_83c = 0xffffffff
int32_t (* var_840)(void* arg1) = sub_73cd58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_838
int32_t eax_2 = __security_cookie ^ &var_838
int32_t var_868 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[3] = 0xffffffff
int32_t var_86c = sub_57c210(&arg1[7])
sub_57c4f0(*arg1, arg1[1])
arg1[1] = *arg1
int32_t result

if (arg2 s< 0)
    result.b = 0
else
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x4da637d, arg3[2] - arg3[1])
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s>= (edx_2 u>> 0x1f) + edx_2)
        result.b = 0
    else
        int32_t ebx_1 = arg2 * 0x34c
        void* ebx_2 = ebx_1 + arg3[1]
        
        if (ebx_1 == neg.d(arg3[1]))
            result.b = 0
        else
            int32_t esi_1 = *(ebx_2 + 0x328)
            var_838 = 0xffffffff
            uint32_t var_834[0x82][0x4]
            _memset(&var_834, 0, 0x824)
            int32_t var_10_1 = esi_1
            int32_t var_c_1 = 0
            sub_4a7790(&var_838, esi_1)
            float ebx_3 = *(ebx_2 + 0x34)
            
            if ((arg1[2] - *arg1) s>> 2 u< ebx_3)
                if (ebx_3 u> 0x3fffffff)
                    sub_6d0927("vector<T> too long")
                    noreturn
                
                sub_57c270(arg1, ebx_3)
            
            float edi_1 = 0f
            
            if (ebx_3 s<= 0)
            label_57b0e2:
                *(arg1 + 0xc) = arg2
                result.b = 1
            else
                while (true)
                    int32_t* var_848
                    sub_57c400(&var_848)
                    int32_t var_83c_1 = 0
                    int32_t* esi_2 = var_848
                    
                    if (sub_5ac8c0(esi_2, arg2, edi_1, ebx_3, &var_838, arg3, arg4, arg5, arg6).b
                            == 0)
                        if (esi_2 != 0)
                            sub_5ac7e0(esi_2)
                            int32_t var_86c_6 = 0x588
                            operator new(esi_2)
                        
                        break
                    
                    sub_57c470(arg1, &var_848)
                    int32_t var_83c_2 = 0xffffffff
                    int32_t* esi_3 = var_848
                    
                    if (esi_3 != 0)
                        sub_5ac7e0(esi_3)
                        int32_t var_86c_5 = 0x588
                        operator new(esi_3)
                    
                    edi_1 += 1
                    
                    if (edi_1 s>= ebx_3)
                        goto label_57b0e2
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_838)
return result
