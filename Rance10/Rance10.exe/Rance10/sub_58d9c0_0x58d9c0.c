// 函数: sub_58d9c0
// 地址: 0x58d9c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73db63
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_174 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *arg3

if (eax_3 != arg3[1])
    void* esi_1 = *eax_3
    
    if (sub_58d620(esi_1, arg2).b != 0)
        void var_124
        sub_577df0(&var_124)
        int32_t var_8_1 = 0
        sub_58d670(esi_1, arg2, &var_124, arg5)
        void var_164
        int32_t* eax_4 = sub_6cac10(&var_164)
        int32_t* edi_1 = nullptr
        int32_t ecx_8 = (arg3[1] - *arg3) s>> 2
        int128_t xmm0 = *eax_4
        int32_t var_28 = ecx_8
        int128_t var_120 = xmm0
        int128_t var_110 = *(eax_4 + 0x10)
        int128_t var_100 = *(eax_4 + 0x20)
        int32_t* eax_5 = &var_28
        
        if (ecx_8 s>= 0x40)
            eax_5 = &data_76849c
        
        int128_t var_f0 = *(eax_4 + 0x30)
        void* i = *eax_5
        void* var_3c
        int32_t* ebx
        
        while (i s> 0)
            int128_t* ecx_10 = nullptr
            void* const edx = nullptr
            void* const var_1c = nullptr
            int128_t* var_18_1 = nullptr
            int32_t var_14_1 = 0
            var_8_1.b = 1
            
            if (i != 0)
                if (i u> 0x3ffffff)
                    sub_6d0927("vector<T> too long")
                    noreturn
                
                sub_58d010(&var_1c, i)
                ecx_10 = var_18_1
                edx = var_1c
            
            ebx = i + edi_1
            
            while (edi_1 s< ebx)
                void* esi_4 = *(*(*arg3 + (edi_1 << 2)) + 0xc) + 4
                
                if (esi_4 u< ecx_10 && edx u<= esi_4)
                    int32_t esi_5 = esi_4 - edx
                    
                    if (ecx_10 == var_14_1)
                        sub_58cfb0(&var_1c, 1)
                        ecx_10 = var_18_1
                        edx = var_1c
                    
                    esi_4 = (esi_5 & 0xffffffc0) + edx
                else if (ecx_10 == var_14_1)
                    sub_58cfb0(&var_1c, 1)
                    ecx_10 = var_18_1
                    edx = var_1c
                
                if (ecx_10 != 0)
                    *ecx_10 = *esi_4
                    ecx_10[1] = *(esi_4 + 0x10)
                    ecx_10[2] = *(esi_4 + 0x20)
                    ecx_10[3] = *(esi_4 + 0x30)
                
                ecx_10 = &ecx_10[4]
                edi_1 += 1
                var_18_1 = ecx_10
            
            void* ecx_14 = sub_570e00(&var_3c, &var_1c)
            void* var_178_5 = ecx_14
            int32_t var_17c_1 = arg4
            
            if (sub_56e050(*(esi_1 + 8), ecx_14, &var_124).b == 0)
                void* const ecx_23 = var_1c
                
                if (ecx_23 != 0)
                    sub_403160(ecx_23, (var_14_1 - ecx_23) s>> 6, 0x40)
                
                ebx.b = 0
                goto label_58dbf0
            
            var_8_1.b = 0
            edi_1 = ebx
            void* const ecx_16 = var_1c
            
            if (ecx_16 != 0)
                sub_403160(ecx_16, (var_14_1 - ecx_16) s>> 6, 0x40)
                var_1c = nullptr
                int32_t var_18_2 = 0
                int32_t var_14_2 = 0
            
            i = 0x40
            void* i_1 = ((arg3[1] - *arg3) s>> 2) - edi_1
            
            if (i_1 s< 0x40)
                i = i_1
        
        if (*(*(esi_1 + 4) + 0x22) != 0 && arg2 != 3)
            (*(*arg5 + 0xc4))(0, 0)
        
        ebx.b = 1
    label_58dbf0:
        void* edx_1 = var_3c
        int32_t var_34
        
        if (edx_1 != 0)
            sub_403160(edx_1, (var_34 - edx_1) s>> 6, 0x40)
        void* eax_9
        eax_9.b = ebx.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9

eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
