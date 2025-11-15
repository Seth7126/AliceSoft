// 函数: sub_5b99f0
// 地址: 0x5b99f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f7b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2

if (esi s>= 0)
    void* arg_4
    void* ecx = arg_4
    
    if (esi s< (*(ecx + 0x18) - *(ecx + 0x14)) s>> 2)
        void** ecx_1 = *(arg1 + 0x48)
        void** eax_7 = *(*(ecx + 0x14) + (esi << 2))
        void** edx_1 = ecx_1[1]
        int32_t* edi_1 = eax_7[6]
        void** eax_8 = ecx_1
        
        while (*(edx_1 + 0xd) == 0)
            if (edx_1[4] s>= edi_1)
                eax_8 = edx_1
                edx_1 = *edx_1
            else
                edx_1 = edx_1[2]
        
        if (eax_8 == ecx_1 || edi_1 s< eax_8[4])
            eax_8 = ecx_1
        
        if (eax_8 != ecx_1)
            void* ecx_2 = eax_8[5]
            arg2.b = (*(ecx_2 + 0x4c) - *(ecx_2 + 0x48)) s>> 2 s> 0
        else
            arg2.b = 0
        
        eax_8.b = eax_7[0x10].b
        char var_20_1 = eax_8.b
        eax_8.b = *(eax_7 + 0x41)
        char var_1c_1 = eax_8.b
        int32_t eax_11
        int32_t edx_2
        edx_2:eax_11 = muls.dp.d(0x38e38e39, *(arg1 + 0x70) - *(arg1 + 0x6c))
        int32_t edx_3 = edx_2 s>> 3
        
        if (sub_5b9e60(arg1, arg_4, esi).b != 0)
            int32_t* var_28 = nullptr
            int32_t var_24 = 0
            int32_t* eax_15
            int32_t ecx_7
            eax_15, ecx_7 = sub_461990()
            var_28 = eax_15
            int32_t var_40_2 = arg2
            int32_t var_8_1 = 0
            void* ebx
            int32_t* esi_1
            
            if (sub_5ba100(arg1, &var_28, arg_4, esi, ecx_7, (edx_3 u>> 0x1f).b + edx_3.b) == 0)
            label_5b9b43:
                esi_1 = var_28
                ebx.b = 0
            else
                esi_1 = var_28
                void* eax_17 = *esi_1
                arg_4 = eax_17
                
                if (eax_17 != esi_1)
                    do
                        void* var_40_3 = eax_17 + 0x14
                        int32_t var_44_3 = var_1c_1.d
                        int32_t var_48_1 = var_20_1.d
                        int32_t var_4c_1 = *(eax_17 + 0x10)
                        
                        if (sub_5b9bd0(arg1, eax_7, edi_1) == 0)
                            goto label_5b9b43
                        
                        sub_429080(&arg_4)
                        eax_17 = arg_4
                    while (eax_17 != esi_1)
                    
                    esi_1 = var_28
                
                ebx.b = 1
            
            int32_t* var_40_4 = esi_1
            sub_5bd210(&var_28, &arg_4, *esi_1)
            sub_403160(var_28, 1, 0x20)
            int32_t eax_20
            eax_20.b = ebx.b
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_20

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
