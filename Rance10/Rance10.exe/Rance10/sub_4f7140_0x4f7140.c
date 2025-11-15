// 函数: sub_4f7140
// 地址: 0x4f7140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7365b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2
void* esi = data_7fcba4
void* var_58 = ebx
sub_6ca100(ebx, 0x28)
int32_t var_98 = arg1
void* i = sub_4f15e0(esi + 0x128)
void* const var_3c_1
void* const edx_2

if (i != 0)
    int32_t edx_1 = *(i + 8)
    
    if (arg1 s< edx_1 || *(i + 4) + edx_1 s<= arg1)
        edx_2 = nullptr
    else
        edx_2 = *(*(i + 0xc) + ((arg1 - edx_1) << 2))
    
    var_3c_1 = edx_2

if (i == 0 || edx_2 == 0)
    i.b = 0
else
    int32_t* ecx_4 = *(edx_2 + 0x74)
    int32_t esi_1
    
    if (ecx_4 != 0)
        edx_2 = var_3c_1
        esi_1 = (*(*ecx_4 + 8))(1)
    else
        esi_1 = 0xffffffff
    
    int32_t var_20
    i = &var_20
    int32_t var_38_1 = esi_1
    var_20 = 1
    int32_t var_1c_1 = 2
    int32_t var_18_1 = 3
    void* i_1 = &var_20
    
    do
        int32_t eax_5 = *i
        
        if (esi_1 s>= 0x10 || eax_5 == 1)
            int32_t* j_3 = nullptr
            int32_t var_44_1 = 0
            int32_t var_40_1 = 0
            int32_t var_8_1 = 0
            sub_4f10c0(edx_2, &j_3, eax_5)
            int32_t* var_34 = nullptr
            int32_t var_30_1 = 0
            int32_t* eax_6
            int32_t ecx_7
            eax_6, ecx_7 = sub_4f2cd0()
            var_34 = eax_6
            var_8_1.b = 1
            int32_t var_60
            void* var_2c
            
            for (int32_t* j = j_3; j != var_44_1; j = &j[1])
                void* eax_7 = *j
                
                if (eax_7 != 0)
                    int32_t var_98_2 = var_60
                    var_2c = *(eax_7 + 0x118)
                    void** var_9c_2 = &var_2c
                    int32_t* var_84
                    ecx_7 = sub_4f2d40(&var_34, &var_84, ecx_7)
            
            sub_6ca100(ebx, var_30_1)
            int32_t* edi_3 = var_34
            int32_t* var_78_1 = edi_3
            int32_t* j_2 = *edi_3
            int32_t* j_4 = j_2
            
            if (j_2 != edi_3)
                void* eax_9 = ebx + 4
                var_2c = eax_9
                
                do
                    int32_t ebx_1 = j_2[4]
                    bool var_21 = ebx_1 != 0
                    sub_4263a0(eax_9, &var_21)
                    
                    if (ebx_1 != 0)
                        char* ebx_2 = (*(*j_2[4] + 8))(0, 0)
                        int32_t eax_12 = (*(*j_2[4] + 0x1c))(eax_2)
                        int32_t eax_13 = (*(*j_2[4] + 0x10))()
                        int32_t j_9 = (*(*j_2[4] + 0x14))()
                        int32_t eax_15 = eax_13 << 2
                        char* var_6c
                        sub_431b80(&var_6c, eax_15 * j_9)
                        var_8_1.b = 2
                        
                        if (j_9 s> 0)
                            char* edi_4 = var_6c
                            int32_t j_8 = j_9
                            int32_t eax_19 = eax_15
                            int32_t j_1
                            
                            do
                                sub_700660(edi_4, ebx_2, eax_19)
                                eax_19 = eax_15
                                ebx_2 = &ebx_2[eax_12]
                                edi_4 = &edi_4[eax_19]
                                j_1 = j_8
                                j_8 -= 1
                            while (j_1 != 1)
                            j_2 = j_4
                            edi_3 = var_78_1
                        
                        sub_6ca100(var_58, eax_13)
                        sub_6ca100(var_58, j_9)
                        char* ebx_3 = var_6c
                        int32_t var_68
                        void* eax_21 = var_68 - ebx_3
                        
                        if (ebx_3 != 0 && eax_21 s> 0)
                            void* ecx_18 = var_2c
                            var_60.b = 0
                            int32_t var_98_9 = 0
                            sub_6ca200(ecx_18, *(ecx_18 + 4), ebx_3, eax_21 + ebx_3)
                        
                        var_8_1.b = 1
                        
                        if (ebx_3 != 0)
                            int32_t var_64
                            sub_403160(ebx_3, var_64 - ebx_3, 1)
                            var_6c = nullptr
                            var_68 = 0
                            var_64 = 0
                    
                    if (*(j_2 + 0xd) == 0)
                        int32_t* j_5 = j_2[2]
                        
                        if (*(j_5 + 0xd) != 0)
                            int32_t* j_7 = j_2[1]
                            
                            if (*(j_7 + 0xd) == 0)
                                while (j_2 == j_7[2])
                                    j_2 = j_7
                                    j_7 = j_7[1]
                                    
                                    if (*(j_7 + 0xd) != 0)
                                        break
                            
                            j_2 = j_7
                            j_4 = j_2
                        else
                            j_2 = j_5
                            j_4 = j_2
                            int32_t* j_6 = *j_2
                            
                            while (*(j_6 + 0xd) == 0)
                                j_2 = j_6
                                j_4 = j_2
                                j_6 = *j_2
                    
                    eax_9 = var_2c
                while (j_2 != edi_3)
                
                edi_3 = var_34
                ebx = var_58
            
            void var_7c
            sub_4f27c0(&var_34, &var_7c, *edi_3, edi_3)
            sub_403160(var_34, 1, 0x14)
            int32_t var_8_2 = 0xffffffff
            int32_t* j_10 = j_3
            
            if (j_10 != 0)
                sub_403160(j_10, (var_40_1 - j_10) s>> 2, 4)
                j_3 = nullptr
                int32_t var_44_2 = 0
                int32_t var_40_2 = 0
            
            esi_1 = var_38_1
        else
            sub_6ca100(ebx, 0)
        
        edx_2 = var_3c_1
        i = i_1 + 4
        i_1 = i
    while (i != &var_14)
    
    i.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return i
