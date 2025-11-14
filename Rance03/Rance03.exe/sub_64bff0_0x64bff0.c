// 函数: sub_64bff0
// 地址: 0x64bff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6ce830
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_3c
int32_t* ebx = arg1
int32_t* var_24 = ebx
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
int32_t* edx = *ebx
void** ecx = edx
void** var_20 = ecx
char var_1c = 1
void** edi = edx[1]
void** var_18
int32_t* arg_c

if (*(edi + 0xd) == 0)
    int32_t* ecx_1 = arg_c
    int32_t edx_1 = ecx_1[5]
    var_18 = ecx_1[4]
    int32_t var_28_1 = edx_1
    
    do
        void** eax_5 = edi[8]
        var_20 = edi
        int32_t* esi_1
        
        if (edi[9] u< 0x10)
            esi_1 = &edi[4]
        else
            esi_1 = edi[4]
        
        int32_t* edx_2
        
        if (edx_1 u< 0x10)
            edx_2 = ecx_1
        else
            edx_2 = *ecx_1
        
        void** ecx_2 = eax_5
        
        if (var_18 u< eax_5)
            ecx_2 = var_18
        
        void** esi_2
        
        if (ecx_2 == 0)
        label_64c0d6:
            esi_2 = edi[8]
            void** ecx_3 = var_18
            
            if (ecx_3 u>= esi_2)
                eax_3.b = ecx_3 != esi_2
            else
                eax_3 = 0xffffffff
        else
            void* i_1 = ecx_2 - 4
            
            if (ecx_2 u>= 4)
                void* i
                
                do
                    if (*edx_2 != *esi_1)
                        goto label_64c097
                    
                    edx_2 = &edx_2[1]
                    esi_1 = &esi_1[1]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            if (i_1 == 0xfffffffc)
                eax_3 = nullptr
            else
            label_64c097:
                eax_5.b = *edx_2
                char temp2_1 = *esi_1
                
                if (eax_5.b != temp2_1)
                    eax_3 = sbb.d(eax_5, eax_5, eax_5.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_3 = nullptr
                else
                    eax_5.b = *(edx_2 + 1)
                    char temp4_1 = *(esi_1 + 1)
                    
                    if (eax_5.b != temp4_1)
                        eax_3 = sbb.d(eax_5, eax_5, eax_5.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_3 = nullptr
                    else
                        eax_5.b = *(edx_2 + 2)
                        char temp5_1 = *(esi_1 + 2)
                        
                        if (eax_5.b != temp5_1)
                            eax_3 = sbb.d(eax_5, eax_5, eax_5.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_3 = nullptr
                        else
                            eax_5.b = *(edx_2 + 3)
                            char temp7_1 = *(esi_1 + 3)
                            
                            if (eax_5.b == temp7_1)
                                eax_3 = nullptr
                            else
                                eax_3 = sbb.d(eax_5, eax_5, eax_5.b u< temp7_1) | 1
            
            if (eax_3 == 0)
                goto label_64c0d6
            
            esi_2 = edi[8]
        
        eax_3.b = eax_3 s< 0
        
        if (eax_3.b == 0)
            int32_t* edx_3
            
            if (var_28_1 u< 0x10)
                edx_3 = arg_c
            else
                edx_3 = *arg_c
            
            int32_t* ecx_4
            
            if (edi[9] u< 0x10)
                ecx_4 = &edi[4]
            else
                ecx_4 = edi[4]
            
            void** eax_8 = var_18
            
            if (esi_2 u< eax_8)
                eax_8 = esi_2
            
            eax_3 = sub_405190(eax_8, edx_3, ecx_4, eax_8)
            bool cond:3_1 = eax_3 s< 0
            
            if (eax_3 == 0)
                void** ecx_5 = var_18
                
                if (esi_2 u>= ecx_5)
                    eax_3.b = esi_2 != ecx_5
                else
                    eax_3 = 0xffffffff
                
                cond:3_1 = eax_3 s< 0
            
            ecx_1 = arg_c
            eax_3.b = cond:3_1
            
            if (eax_3.b != 0 || ecx_1[6] s>= edi[0xa])
                edi = edi[2]
                eax_3.b = 0
            else
                edi = *edi
                eax_3.b = 1
        else
            ecx_1 = arg_c
            eax_3.b = 1
            edi = *edi
        
        edx_1 = ecx_1[5]
        var_1c = eax_3.b
    while (*(edi + 0xd) == 0)
    
    edx = *ebx
    ecx = var_20
    ebx = var_24

void** esi_3 = ecx
var_18 = esi_3

if (eax_3.b == 0)
    goto label_64c1c7

char var_4c
int32_t** var_48
void** var_44
int32_t** eax_10
int32_t* ecx_6

if (ecx != *edx)
    sub_418580(&var_18)
    esi_3 = var_18
label_64c1c7:
    int32_t* ebx_1 = arg_c
    
    if (sub_64b740(&esi_3[4], ebx_1) == 0)
        *arg2 = esi_3
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    int32_t var_40_4 = arg3
    ecx_6 = var_24
    void var_2c
    eax_10 = &var_2c
    var_44 = ebx_1
    var_48 = var_20
    var_4c = var_1c
else
    int32_t var_40_2 = arg3
    var_44 = arg_c
    var_48 = ecx
    var_4c = 1
    eax_10 = &arg_c
    ecx_6 = ebx

*arg2 = *sub_64c210(ecx_6, eax_10, var_4c, var_48, var_44)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
