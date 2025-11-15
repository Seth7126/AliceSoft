// 函数: sub_559e30
// 地址: 0x559e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b251
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_60
int32_t* arg_4
int32_t* eax_3 = sub_55a920(&var_60:4, arg_4)
int32_t var_8_1 = 0
int32_t* i_2
sub_559ae0(eax_3, eax_3, &i_2, arg3)
var_8_1.b = 2
sub_417070(&var_60:4)
int32_t* ecx_3 = data_7fcbd4
int32_t edx_2

if (ecx_3 != 0)
    (**ecx_3)(eax_2)
    edx_2 = data_7fcbd4
else
    edx_2 = 0

int32_t* var_38
int32_t* eax_5 = sub_432270(&var_38, edx_2)
int32_t* var_44 = nullptr
SRWLOCK var_40
__builtin_memset(&var_40, 0, 4)
sub_4323a0(&var_44, eax_5)
SRWLOCK var_34
__seterrormode(&var_34)
var_8_1.b = 4
int32_t* ecx_6 = var_38

if (ecx_6 != 0)
    var_38 = nullptr
    (*(*ecx_6 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_34)
int128_t xmm0 = data_79a780
struct partsengine::CSurfacePackList::VTable* const var_64 =
    &partsengine::CSurfacePackList::`vftable'
var_60 = xmm0
var_8_1.b = 5
void* var_3c
int32_t* eax_7 = sub_559c10(&var_3c, &i_2)
var_8_1.b = 6
int32_t edi = data_7fcb5c
__Smtx_lock_shared(&var_40)
int32_t* esi = var_44
__Smtx_unlock_shared(&var_40)
int32_t var_78_6 = edi
bool cond:0 = sub_4bca80(&var_64, eax_7, esi) == 0
var_8_1.b = 5
void* ecx_9 = var_3c
int32_t* ebx
ebx.b = cond:0

if (ecx_9 != 0)
    sub_403160(ecx_9, (var_34 - ecx_9) s>> 2, 4)

if (ebx.b == 0)
    int32_t* i_4 = i_2
    int32_t var_4c
    
    if (i_4 != var_4c)
        int32_t* arg_8
        int32_t* ebx_1 = arg_8
        int32_t edi_8
        
        do
            void** edi_2 = &i_4[1]
            int32_t* eax_12 = sub_6e810c(0x6c)
            int32_t* var_2c_1 = eax_12
            var_8_1.b = 7
            int32_t* eax_13 = sub_54d5a0(eax_12)
            var_8_1.b = 5
            arg_8 = eax_13
            arg_4 = eax_13
            
            if (*(arg1 + 0xf8) != 0)
                void* ecx_12 = *eax_13
                eax_13[0xd].b = 1
                
                if (ecx_12 != 0)
                    sub_451b40(ecx_12)
            
            int32_t ecx_13 = ebx_1[1]
            int32_t** eax_14 = &arg_4
            int32_t edx_4
            
            if (&arg_4 u< ecx_13)
                edx_4 = *ebx_1
            
            int32_t*** ecx_16
            
            if (&arg_4 u>= ecx_13 || edx_4 u> &arg_4)
                if (ecx_13 == ebx_1[2])
                    int32_t var_78_8 = ecx_13
                    eax_14 = sub_42cd50(ebx_1)
                
                ecx_16 = ebx_1[1]
                
                if (ecx_16 != 0)
                    eax_14 = arg_8
                    *ecx_16 = eax_14
            else
                eax_14 = (&arg_4 - edx_4) s>> 2
                
                if (ecx_13 == ebx_1[2])
                    int32_t var_78_7 = ecx_13
                    sub_42cd50(ebx_1)
                
                ecx_16 = ebx_1[1]
                
                if (ecx_16 != 0)
                    eax_14 = *(*ebx_1 + (eax_14 << 2))
                    *ecx_16 = eax_14
            ebx_1[1] += 4
            
            if (edi_2[4] != 2)
                sub_559d00(eax_14, &var_64, arg_8, *i_4)
                edi_8 = var_4c
            else
                int32_t ecx_17 = edi_2[5]
                
                if (ecx_17 u< 0x10)
                    eax_14 = edi_2
                else
                    eax_14 = *edi_2
                
                if (*eax_14 != 0x81)
                    sub_559d00(eax_14, &var_64, arg_8, *i_4)
                    edi_8 = var_4c
                else
                    if (ecx_17 u>= 0x10)
                        edi_2 = *edi_2
                    
                    if (*(edi_2 + 1) != 0x5c || arg2 == 0)
                        sub_559d00(eax_14, &var_64, arg_8, *i_4)
                        edi_8 = var_4c
                    else
                        int32_t* i_5 = i_4
                        void* esi_1 = &i_4[7]
                        
                        if (esi_1 != var_4c)
                            void* ecx_18 = esi_1 + 4
                            
                            while (*(ecx_18 + 0x10) == 2)
                                int32_t edi_3 = *(ecx_18 + 0x14)
                                char* edx_6
                                
                                if (edi_3 u< 0x10)
                                    edx_6 = ecx_18
                                else
                                    edx_6 = *ecx_18
                                
                                if (*edx_6 != 0x81)
                                    break
                                
                                void* edx_7
                                
                                if (edi_3 u< 0x10)
                                    edx_7 = ecx_18
                                else
                                    edx_7 = *ecx_18
                                
                                if (*(edx_7 + 1) != 0x5c)
                                    break
                                
                                esi_1 += 0x1c
                                ecx_18 += 0x1c
                                
                                if (esi_1 == var_4c)
                                    break
                        
                        i_4 = esi_1 - 0x1c
                        void* ecx_20 = i_4 - i_5
                        int32_t eax_16
                        void* edx_8
                        edx_8:eax_16 = muls.dp.d(0x92492493, ecx_20)
                        int32_t edx_10 = (edx_8 + ecx_20) s>> 4
                        eax_14 = (edx_10 u>> 0x1f) + 1 + edx_10
                        
                        if (eax_14 == 1)
                            sub_559d00(eax_14, &var_64, arg_8, *i_4)
                            edi_8 = var_4c
                        else
                            void* var_78_9 = ecx_20
                            int32_t* var_14 = nullptr
                            arg_4 = nullptr
                            sub_5599c0(arg1, &var_14, &arg_4)
                            int32_t* edi_4 = var_14
                            void* ecx_23 = &arg_8[0xe]
                            *(ecx_23 + 4) = *(arg3 + 4)
                            *(ecx_23 + 8) = *(arg3 + 8)
                            *(ecx_23 + 0xc) = *(arg3 + 0xc)
                            *(ecx_23 + 0x1c) = *(arg3 + 0x1c)
                            *(ecx_23 + 0x20) = *(arg3 + 0x20)
                            int32_t* eax_24 = arg_4
                            *(ecx_23 + 0x24) = *(arg3 + 0x24)
                            
                            if (edi_4 s> 0 && eax_24 s> 0)
                                int32_t* eax_26 = sub_63de80(i_4, edi_4, edi_4 * 2, eax_24, ecx_23)
                                
                                if (eax_26 != 0)
                                    sub_54dae0(arg_8, edi_4, arg_4, 0, 0, 0, 0)
                                    int32_t* eax_27 = sub_54e9a0(arg_8)
                                    int32_t* ecx_26 = arg_8[4]
                                    
                                    if (ecx_26 != 0)
                                        (*(*ecx_26 + 0x5c))(eax_27, 0, 0, eax_26, 0, 0, edi_4, 
                                            arg_4)
                                    
                                    (*(*eax_26 + 4))(eax_2)
                            
                            void* i_3 = eax_14 - 2
                            
                            if (eax_14 - 2 s> 0)
                                int32_t* esi_2 = var_14
                                void* i
                                
                                do
                                    int32_t* eax_32 = sub_6e810c(0x6c)
                                    int32_t* var_30_1 = eax_32
                                    var_8_1.b = 8
                                    int32_t* eax_33 = sub_54d5a0(eax_32)
                                    var_8_1.b = 5
                                    arg_8 = eax_33
                                    
                                    if (*(arg1 + 0xf8) != 0)
                                        void* ecx_29 = *eax_33
                                        eax_33[0xd].b = 1
                                        
                                        if (ecx_29 != 0)
                                            sub_451b40(ecx_29)
                                    
                                    int32_t ecx_30 = ebx_1[1]
                                    int32_t edx_13
                                    
                                    if (&arg_8 u< ecx_30)
                                        edx_13 = *ebx_1
                                    
                                    if (&arg_8 u>= ecx_30 || edx_13 u> &arg_8)
                                        if (ecx_30 == ebx_1[2])
                                            int32_t var_78_13 = ecx_30
                                            sub_42cd50(ebx_1)
                                        
                                        int32_t** eax_38 = ebx_1[1]
                                        
                                        if (eax_38 != 0)
                                            *eax_38 = eax_33
                                    else
                                        if (ecx_30 == ebx_1[2])
                                            int32_t var_78_12 = ecx_30
                                            sub_42cd50(ebx_1)
                                        
                                        int32_t* ecx_32 = ebx_1[1]
                                        
                                        if (ecx_32 != 0)
                                            *ecx_32 = *(*ebx_1 + ((&arg_8 - edx_13) s>> 2 << 2))
                                    
                                    ebx_1[1] += 4
                                    *(arg3 + 4)
                                    (*(arg3 + 8))->__offset(0xc).o = *(arg3 + 0xc)
                                    *(arg3 + 0x1c)
                                    HDC ecx_34 = *(arg3 + 0x20)
                                    ecx_34->__offset(0x24).o = *(arg3 + 0x24)
                                    
                                    if (esi_2 s> 0)
                                        int32_t* eax_43 = arg_4
                                        
                                        if (eax_43 s> 0)
                                            int32_t* eax_45 =
                                                sub_63de80(esi_2, eax_33, esi_2 * 3, eax_43, ecx_34)
                                            arg_8 = eax_45
                                            
                                            if (eax_45 != 0)
                                                sub_54dae0(eax_33, esi_2, arg_4, 0, 0, 0, 0)
                                                int32_t* eax_46 = sub_54e9a0(eax_33)
                                                int32_t* ecx_37 = eax_33[4]
                                                int32_t* edi_6 = arg_8
                                                
                                                if (ecx_37 != 0)
                                                    (*(*ecx_37 + 0x5c))(eax_46, 0, 0, edi_6, esi_2, 
                                                        0, esi_2, arg_4)
                                                
                                                (*(*edi_6 + 4))(eax_2)
                                    
                                    i = i_3
                                    i_3 -= 1
                                while (i != 1)
                                edi_4 = var_14
                            
                            SRWLOCK eax_48 = sub_6e810c(0x6c)
                            var_34 = eax_48
                            var_8_1.b = 9
                            int32_t* eax_49 = sub_54d5a0(eax_48)
                            var_8_1.b = 5
                            arg_8 = eax_49
                            var_14 = eax_49
                            
                            if (*(arg1 + 0xf8) != 0)
                                void* ecx_41 = *eax_49
                                eax_49[0xd].b = 1
                                
                                if (ecx_41 != 0)
                                    sub_451b40(ecx_41)
                            
                            int32_t ecx_42 = ebx_1[1]
                            int32_t edx_17
                            
                            if (&var_14 u< ecx_42)
                                edx_17 = *ebx_1
                            
                            int32_t* eax_53
                            
                            if (&var_14 u>= ecx_42 || edx_17 u> &var_14)
                                if (ecx_42 == ebx_1[2])
                                    int32_t var_78_19 = ecx_42
                                    sub_42cd50(ebx_1)
                                
                                int32_t** ecx_50 = ebx_1[1]
                                
                                if (ecx_50 == 0)
                                    eax_53 = arg_8
                                else
                                    eax_53 = arg_8
                                    *ecx_50 = eax_53
                            else
                                if (ecx_42 == ebx_1[2])
                                    int32_t var_78_16 = ecx_42
                                    sub_42cd50(ebx_1)
                                
                                int32_t* ecx_44 = ebx_1[1]
                                
                                if (ecx_44 != 0)
                                    *ecx_44 = *(*ebx_1 + ((&var_14 - edx_17) s>> 2 << 2))
                                
                                eax_53 = arg_8
                            
                            ebx_1[1] += 4
                            eax_53[0xf] = *(arg3 + 4)
                            eax_53[0x10] = *(arg3 + 8)
                            *(eax_53 + 0x44) = *(arg3 + 0xc)
                            eax_53[0x15] = *(arg3 + 0x1c)
                            eax_53[0x16] = *(arg3 + 0x20)
                            *(eax_53 + 0x5c) = *(arg3 + 0x24)
                            
                            if (edi_4 s> 0)
                                int32_t* eax_58 = arg_4
                                
                                if (eax_58 s> 0)
                                    int32_t* eax_60 =
                                        sub_63de80(i_4, edi_4, edi_4 * 2, eax_58, &eax_53[0xe])
                                    
                                    if (eax_60 != 0)
                                        sub_54dae0(arg_8, edi_4, arg_4, 0, 0, 0, 0)
                                        int32_t* eax_61 = sub_54e9a0(arg_8)
                                        int32_t* ecx_48 = arg_8[4]
                                        int32_t* edi_7
                                        
                                        if (ecx_48 == 0)
                                            edi_7 = eax_60
                                        else
                                            edi_7 = eax_60
                                            (*(*ecx_48 + 0x5c))(eax_61, 0, 0, edi_7, edi_4, 0, 
                                                edi_4, arg_4)
                                        
                                        (*(*edi_7 + 4))(eax_2)
                            
                            edi_8 = var_4c
                            
                            if (i_4 == edi_8)
                                break
            
            i_4 = &i_4[7]
        while (i_4 != edi_8)
        
        for (int32_t* i_1 = i_2; i_1 != edi_8; i_1 = &i_1[7])
            int32_t* ecx_53 = *i_1
            
            if (ecx_53 != 0)
                (*(*ecx_53 + 4))(eax_2)

sub_4bca00(&var_64)
__seterrormode(&var_40)
var_8_1.b = 0xa
int32_t* ecx_55 = var_44

if (ecx_55 != 0)
    var_44 = nullptr
    (*(*ecx_55 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_40)
int32_t result = sub_55bf70(&i_2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
