// 函数: sub_40ddd0
// 地址: 0x40ddd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?SearchCacheLocal@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_NK@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_98 = ebx
int32_t esi
int32_t var_9c = esi
int32_t edi
int32_t var_a0 = edi
int32_t var_a4 = eax_2
int32_t* esp = &var_a4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_94 = 0

if (ecx == 0 || *(arg1 + 8) == 0 || *(arg1 + 0xc) == 0)
    sub_414340(arg2)
else
    int32_t eax_3 = *ecx
    void var_90
    void* var_ac = &var_90
    (*(eax_3 + 0xc))(var_ac, arg3)
    esp = &var_a4
    int32_t var_8_1 = 0
    char var_18
    
    if (var_18 != 0)
        void* ecx_3 = &var_90
        
        if (sub_41a7d0(ecx_3) == 0)
            if (sub_41a800(ecx_3) == 0)
                sub_414340(arg2)
                sub_40ad50(&var_90)
            else
                char* eax_9
                float xmm0_1
                eax_9, xmm0_1 = sub_41a970(&var_90)
                xmm0_1 - 0f
                int32_t var_a8_3 = arg3
                var_ac = arg2
                esp = &var_ac
                eax_9:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                    | (xmm0_1 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    (*(**(arg1 + 0xc) + 0xc))()
                    sub_40ad50(&var_90)
                else
                    (*(**(arg1 + 8) + 0xc))()
                    sub_40ad50(&var_90)
        else
            int32_t eax_5 = sub_41a840(ecx_3)
            int32_t var_a8_2 = arg3
            var_ac = arg2
            esp = &var_ac
            
            if (eax_5 == 0)
                (*(**(arg1 + 0xc) + 0xc))()
                sub_40ad50(&var_90)
            else
                (*(**(arg1 + 8) + 0xc))()
                sub_40ad50(&var_90)
    else
        sub_414340(arg2)
        sub_40ad50(&var_90)

fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
