// 函数: sub_4678b0
// 地址: 0x4678b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b9110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_38
int32_t* edx = arg1
int32_t* var_20 = edx
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
int32_t* ecx = *edx
int32_t** ebx = ecx
void** var_28 = ecx
char var_1c = 1
void** edi = ecx[1]
int32_t** var_18
void** arg_c

if (*(edi + 0xd) == 0)
    void** eax_4 = arg_c
    var_18 = eax_4[4]
    int32_t** var_24_1
    
    while (true)
        void* ecx_2 = &edi[4]
        int32_t** ebx_1 = *(ecx_2 + 0x10)
        var_24_1 = edi
        
        if (edi[9] u>= 0x10)
            ecx_2 = *ecx_2
        
        void* esi_1
        
        if (eax_4[5] u< 0x10)
            esi_1 = eax_4
        else
            esi_1 = *eax_4
        
        int32_t** edx_1 = ebx_1
        
        if (var_18 u< ebx_1)
            edx_1 = var_18
        
        bool cond:2_1
        
        if (edx_1 == 0)
        label_467992:
            int32_t** edx_2 = var_18
            
            if (edx_2 u>= ebx_1)
                eax_3.b = edx_2 != ebx_1
            else
                eax_3 = 0xffffffff
            
            cond:2_1 = eax_3 s< 0
        else
            void* i_1 = edx_1 - 4
            
            if (edx_1 u>= 4)
                void* i
                
                do
                    if (*esi_1 != *ecx_2)
                        goto label_467958
                    
                    esi_1 += 4
                    ecx_2 += 4
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            if (i_1 == 0xfffffffc)
                eax_3 = nullptr
            else
            label_467958:
                eax_4.b = *esi_1
                char temp2_1 = *ecx_2
                
                if (eax_4.b != temp2_1)
                    eax_3 = sbb.d(eax_4, eax_4, eax_4.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_3 = nullptr
                else
                    eax_4.b = *(esi_1 + 1)
                    char temp5_1 = *(ecx_2 + 1)
                    
                    if (eax_4.b != temp5_1)
                        eax_3 = sbb.d(eax_4, eax_4, eax_4.b u< temp5_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_3 = nullptr
                    else
                        eax_4.b = *(esi_1 + 2)
                        char temp6_1 = *(ecx_2 + 2)
                        
                        if (eax_4.b != temp6_1)
                            eax_3 = sbb.d(eax_4, eax_4, eax_4.b u< temp6_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_3 = nullptr
                        else
                            eax_4.b = *(esi_1 + 3)
                            char temp7_1 = *(ecx_2 + 3)
                            
                            if (eax_4.b == temp7_1)
                                eax_3 = nullptr
                            else
                                eax_3 = sbb.d(eax_4, eax_4, eax_4.b u< temp7_1) | 1
            
            cond:2_1 = eax_3 s< 0
            
            if (eax_3 == 0)
                goto label_467992
        
        eax_3.b = cond:2_1
        var_1c = eax_3.b
        
        if (eax_3.b == 0)
            edi = edi[2]
        else
            edi = *edi
        
        if (*(edi + 0xd) != 0)
            break
        
        eax_4 = arg_c
    
    ebx = var_24_1
    ecx = var_28
    edx = var_20

int32_t** esi_2 = ebx
var_18 = esi_2

if (eax_3.b == 0)
    goto label_467a17

char var_48
int32_t** var_44
void** var_40
void*** eax_6
int32_t* ecx_3

if (ebx != *ecx)
    sub_418580(&var_18)
    esi_2 = var_18
label_467a17:
    void** edi_2 = arg_c
    
    if (sub_40c3a0(&esi_2[4], edi_2) == 0)
        *arg2 = esi_2
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    int32_t var_3c_2 = arg3
    ecx_3 = var_20
    eax_6 = &var_28
    var_40 = edi_2
    var_44 = ebx
    var_48 = var_1c
else
    int32_t var_3c = arg3
    eax_6 = &arg_c
    var_40 = arg_c
    var_44 = ebx
    var_48 = 1
    ecx_3 = edx

*arg2 = *sub_467d20(ecx_3, eax_6, var_48, var_44, var_40)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
