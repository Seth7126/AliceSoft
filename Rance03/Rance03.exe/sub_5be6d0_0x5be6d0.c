// 函数: sub_5be6d0
// 地址: 0x5be6d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5420
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_50 = ebx
char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg2 + 8))
label_5be93a:
    result.b = 0
else
    uint32_t esi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    
    if (esi_7 s> 0)
        int32_t var_4c
        int32_t var_6c_1 = var_4c
        void* var_70_1 = arg1
        sub_5bc9e0(*(ebx + 0x84), *(ebx + 0x88))
        *(ebx + 0x88) = *(ebx + 0x84)
        sub_5bc780(ebx + 0x84, esi_7)
        int32_t edi_1 = 0
        
        if (esi_7 s> 0)
            int32_t ebx_1 = 0
            
            do
                if (sub_5bc010(*(var_50 + 0x84) + ebx_1, arg2).b == 0)
                    goto label_5be93a
                
                edi_1 += 1
                ebx_1 += 0x28
            while (edi_1 s< esi_7)
            
            ebx = var_50
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_4 = 0
    int32_t eax_10
    int32_t edx_2
    edx_2:eax_10 = muls.dp.d(0x66666667, *(ebx + 0x88) - *(ebx + 0x84))
    int32_t i_1 = 0
    int32_t edx_3 = edx_2 s>> 4
    
    if ((edx_3 u>> 0x1f) + edx_3 s> 0)
        int32_t edi_2 = 0
        int32_t var_4c_1 = 0
        int32_t edx_10
        int32_t i
        
        do
            int32_t* esi_9 = *(ebx + 0x84) + edi_2
            int32_t j = 0
            void* edi_3 = esi_9[6]
            int32_t eax_13
            int32_t edx_4
            edx_4:eax_13 = muls.dp.d(0x2aaaaaab, esi_9[7] - edi_3)
            int32_t edx_5 = edx_4 s>> 3
            
            if ((edx_5 u>> 0x1f) + edx_5 s> 0)
                int32_t ebx_2 = 0
                int32_t edx_8
                
                do
                    int32_t eax_19 = (*(ebx_2 + edi_3 + 0x24) - *(ebx_2 + edi_3 + 0x20)) s>> 2
                    
                    if (eax_19 s< 0 || eax_19 s> 0x1a)
                        void** ecx_10 = edi_3 + 4 + ebx_2
                        
                        if (ecx_10[5] u>= 0x10)
                            ecx_10 = *ecx_10
                        
                        int32_t* edx_6
                        
                        if (esi_9[5] u< 0x10)
                            edx_6 = esi_9
                        else
                            edx_6 = *esi_9
                        
                        int32_t var_6c_4 = eax_19
                        void** var_70_2 = ecx_10
                        int32_t* var_74_1 = edx_6
                        var_4.b = 1
                        int32_t var_2c
                        sub_403110(&var_44, 
                            sub_4691f0(&var_2c, 
                                "HLL [%s] Function [%s] Over NumofParameter [%d]\n"), 
                            nullptr, 0xffffffff)
                        var_4.b = 0
                        int32_t var_18
                        
                        if (var_18 u>= 0x10)
                            j__free(var_2c)
                    
                    edi_3 = esi_9[6]
                    j += 1
                    ebx_2 += 0x30
                    int32_t eax_21
                    int32_t edx_7
                    edx_7:eax_21 = muls.dp.d(0x2aaaaaab, esi_9[7] - edi_3)
                    edx_8 = edx_7 s>> 3
                while (j s< (edx_8 u>> 0x1f) + edx_8)
                ebx = var_50
            
            i = i_1 + 1
            int32_t eax_25
            int32_t edx_9
            edx_9:eax_25 = muls.dp.d(0x66666667, *(ebx + 0x88) - *(ebx + 0x84))
            edi_2 = var_4c_1 + 0x28
            i_1 = i
            edx_10 = edx_9 s>> 4
            var_4c_1 = edi_2
        while (i s< (edx_10 u>> 0x1f) + edx_10)
    
    if ((edx_3 u>> 0x1f) + edx_3 s<= 0 || var_34_1 == 0)
        ebx.b = 1
    else
        char* eax_28 = &var_44
        
        if (var_30_1 u>= 0x10)
            eax_28 = var_44.d
        
        sub_64b530(eax_28)
        ebx.b = 0
    
    if (var_30_1 u>= 0x10)
        j__free(var_44.d)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
