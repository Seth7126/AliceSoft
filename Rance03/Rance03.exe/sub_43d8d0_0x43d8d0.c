// 函数: sub_43d8d0
// 地址: 0x43d8d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b6580
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
void** ebx = ecx
char var_1c = 1
void** edi = ecx[1]
void** var_18
int32_t* arg_c

if (*(edi + 0xd) == 0)
    int32_t* edx_1 = arg_c
    void** eax_4 = edx_1[4]
    var_18 = eax_4
    void** var_24_1
    
    while (true)
        void* ecx_1 = &edi[4]
        void** ebx_1 = *(ecx_1 + 0x10)
        var_24_1 = edi
        
        if (edi[9] u>= 0x10)
            ecx_1 = *ecx_1
        
        int32_t* esi_1
        
        if (edx_1[5] u< 0x10)
            esi_1 = edx_1
        else
            esi_1 = *edx_1
        
        void** edx_2 = ebx_1
        
        if (eax_4 u< ebx_1)
            edx_2 = eax_4
        
        if (edx_2 == 0)
            goto label_43d9b8
        
        void* i_1 = edx_2 - 4
        
        if (edx_2 u>= 4)
            void* i
            
            do
                if (*esi_1 != *ecx_1)
                    goto label_43d976
                
                esi_1 = &esi_1[1]
                ecx_1 += 4
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        if (i_1 == 0xfffffffc)
            eax_3 = nullptr
        else
        label_43d976:
            eax_4.b = *esi_1
            char temp2_1 = *ecx_1
            
            if (eax_4.b != temp2_1)
                eax_3 = sbb.d(eax_4, eax_4, eax_4.b u< temp2_1) | 1
            else if (i_1 == 0xfffffffd)
                eax_3 = nullptr
            else
                eax_4.b = *(esi_1 + 1)
                char temp4_1 = *(ecx_1 + 1)
                
                if (eax_4.b != temp4_1)
                    eax_3 = sbb.d(eax_4, eax_4, eax_4.b u< temp4_1) | 1
                else if (i_1 == 0xfffffffe)
                    eax_3 = nullptr
                else
                    eax_4.b = *(esi_1 + 2)
                    char temp5_1 = *(ecx_1 + 2)
                    
                    if (eax_4.b != temp5_1)
                        eax_3 = sbb.d(eax_4, eax_4, eax_4.b u< temp5_1) | 1
                    else if (i_1 == 0xffffffff)
                        eax_3 = nullptr
                    else
                        eax_4.b = *(esi_1 + 3)
                        char temp6_1 = *(ecx_1 + 3)
                        
                        if (eax_4.b == temp6_1)
                            eax_3 = nullptr
                        else
                            eax_3 = sbb.d(eax_4, eax_4, eax_4.b u< temp6_1) | 1
        
        if (eax_3 == 0)
            eax_4 = var_18
        label_43d9b8:
            edx_1 = arg_c
            
            if (eax_4 u>= ebx_1)
                eax_3.b = edx_1[4] != ebx_1
            else
                eax_3 = 0xffffffff
        else
            edx_1 = arg_c
        
        eax_3.b = eax_3 s< 0
        var_1c = eax_3.b
        
        if (eax_3.b == 0)
            edi = edi[2]
        else
            edi = *edi
        
        if (*(edi + 0xd) != 0)
            break
        
        eax_4 = var_18
    
    ebx = var_24_1
    edx = var_20

void** esi_2 = ebx
var_18 = esi_2

if (eax_3.b == 0)
    goto label_43da42

char var_48
void** var_44
int32_t* var_40
int32_t* ecx_2

if (ebx != *ecx)
    sub_418580(&var_18)
    esi_2 = var_18
label_43da42:
    char eax_9
    int32_t* ecx_7
    eax_9, ecx_7 = sub_40c3a0(&esi_2[4], arg_c)
    
    if (eax_9 == 0)
        sub_43daa0(arg3 + 0x10)
        j__free(arg3)
        *arg2 = esi_2
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    void* var_3c_2 = arg3
    var_40 = ecx_7
    ecx_2 = var_20
    var_44 = ebx
    var_48 = var_1c
else
    void* var_3c = arg3
    var_40 = ecx
    var_44 = ebx
    var_48 = 1
    ecx_2 = edx

*arg2 = *sub_43d720(ecx_2, &arg_c, var_48, var_44, var_40)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
