// 函数: sub_4c0120
// 地址: 0x4c0120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be0d9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_e4
int32_t eax_2 = __security_cookie ^ &var_e4
int32_t __saved_edi
int32_t var_f8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* var_d4 = edi
int32_t var_fc = arg5
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q((arg4 - edi) s/ 0x5c)
int32_t* i = ((eax_9 - edx_3) s>> 1) * 0x5c + edi
sub_4c0d30(arg4 - 0x5c, i, edi, arg4 - 0x5c)
void* ebx = &i[0x17]
var_e4 = ebx

for (; edi u< i; i -= 0x5c)
    int32_t eax_13 = i[-0x15]
    int32_t ecx_3 = i[2]
    
    if (eax_13 s< ecx_3)
        break
    
    if (ecx_3 s< eax_13)
        break

void* edx_5 = arg4

if (ebx u< edx_5)
    int32_t ecx_4 = i[2]
    
    do
        int32_t eax_14 = *(ebx + 8)
        
        if (eax_14 s< ecx_4)
            break
        
        if (ecx_4 s< eax_14)
            break
        
        ebx += 0x5c
    while (ebx u< edx_5)
    
    var_e4 = ebx

int32_t* i_1 = i
void* esi_1 = ebx
int32_t* i_3 = i_1

while (true)
    void* var_e0_1 = esi_1
    
    while (true)
        int32_t var_c0
        int32_t var_bc
        void* var_b8
        void* var_a0
        char var_88
        void var_84
        void var_78
        
        if (esi_1 u< edx_5)
            void* edi_1 = esi_1 + 0x10
            void* ebx_1 = ebx - 0x4c
            
            do
                int32_t eax_15 = i[2]
                int32_t ecx_5 = *(edi_1 - 8)
                
                if (eax_15 s>= ecx_5)
                    if (ecx_5 s< eax_15)
                        break
                    
                    void* ecx_6 = var_e4
                    ebx_1 += 0x5c
                    var_e4 = ecx_6 + 0x5c
                    
                    if (ecx_6 != esi_1)
                        int32_t xmm0_1 = *(ebx_1 - 0x10)
                        int32_t xmm0_2 = *(ebx_1 - 0xc)
                        sub_4bf370(&var_c0, ebx_1 - 8)
                        int32_t var_4 = 0
                        *(ebx_1 - 0x10) = *var_e0_1
                        *(ebx_1 - 0xc) = *(edi_1 - 0xc)
                        *(ebx_1 - 8) = *(edi_1 - 8)
                        *(ebx_1 - 4) = *(edi_1 - 4)
                        
                        if (ebx_1 != edi_1)
                            sub_401ff0(ebx_1, edi_1, 0, 0xffffffff)
                        
                        if (ebx_1 + 0x18 != edi_1 + 0x18)
                            sub_401ff0(ebx_1 + 0x18, edi_1 + 0x18, 0, 0xffffffff)
                        
                        int32_t* eax_22
                        eax_22.b = *(edi_1 + 0x30)
                        *(ebx_1 + 0x30) = eax_22.b
                        sub_4bf960(ebx_1 + 0x34, edi_1 + 0x34)
                        sub_4a6db0(ebx_1 + 0x40, edi_1 + 0x40)
                        esi_1 = var_e0_1
                        int32_t eax_25 = var_c0
                        *esi_1 = xmm0_1
                        *(edi_1 - 0xc) = xmm0_2
                        *(edi_1 - 8) = eax_25
                        *(edi_1 - 4) = var_bc
                        
                        if (edi_1 != &var_b8)
                            sub_401ff0(edi_1, &var_b8, 0, 0xffffffff)
                        
                        if (edi_1 + 0x18 != &var_a0)
                            sub_401ff0(edi_1 + 0x18, &var_a0, 0, 0xffffffff)
                        
                        *(edi_1 + 0x30) = var_88
                        sub_4bf960(edi_1 + 0x34, &var_84)
                        sub_4a6db0(edi_1 + 0x40, &var_78)
                        int32_t var_4_1 = 0xffffffff
                        sub_4b7cf0(&var_c0)
                        edx_5 = arg4
                
                esi_1 += 0x5c
                edi_1 += 0x5c
                var_e0_1 = esi_1
            while (esi_1 u< edx_5)
            
            i_1 = i_3
            edi = var_d4
        
        bool cond:0_1 = i_1 != edi
        
        if (i_1 u> edi)
            void* ebx_2 = &i[4]
            void* edi_2 = &i_1[-0x13]
            
            do
                int32_t eax_28 = *(edi_2 - 8)
                int32_t edx_6 = *(ebx_2 - 8)
                
                if (eax_28 s>= edx_6)
                    if (edx_6 s< eax_28)
                        break
                    
                    i -= 0x5c
                    ebx_2 -= 0x5c
                    
                    if (i != edi_2 - 0x10)
                        int32_t xmm0_5 = *i
                        int32_t xmm0_6 = *(ebx_2 - 0xc)
                        sub_4bf370(&var_c0, ebx_2 - 8)
                        int32_t var_4_2 = 1
                        *i = *(edi_2 - 0x10)
                        *(ebx_2 - 0xc) = *(edi_2 - 0xc)
                        *(ebx_2 - 8) = *(edi_2 - 8)
                        *(ebx_2 - 4) = *(edi_2 - 4)
                        
                        if (ebx_2 != edi_2)
                            sub_401ff0(ebx_2, edi_2, 0, 0xffffffff)
                        
                        if (ebx_2 + 0x18 != edi_2 + 0x18)
                            sub_401ff0(ebx_2 + 0x18, edi_2 + 0x18, 0, 0xffffffff)
                        
                        int32_t* eax_33
                        eax_33.b = *(edi_2 + 0x30)
                        *(ebx_2 + 0x30) = eax_33.b
                        sub_4bf960(ebx_2 + 0x34, edi_2 + 0x34)
                        sub_4a6db0(ebx_2 + 0x40, edi_2 + 0x40)
                        int32_t eax_36 = var_c0
                        *(edi_2 - 0x10) = xmm0_5
                        *(edi_2 - 0xc) = xmm0_6
                        *(edi_2 - 8) = eax_36
                        *(edi_2 - 4) = var_bc
                        
                        if (edi_2 != &var_b8)
                            sub_401ff0(edi_2, &var_b8, 0, 0xffffffff)
                        
                        if (edi_2 + 0x18 != &var_a0)
                            sub_401ff0(edi_2 + 0x18, &var_a0, 0, 0xffffffff)
                        
                        *(edi_2 + 0x30) = var_88
                        sub_4bf960(edi_2 + 0x34, &var_84)
                        sub_4a6db0(edi_2 + 0x40, &var_78)
                        int32_t var_4_3 = 0xffffffff
                        sub_4b7cf0(&var_c0)
                        i_1 = i_3
                
                i_1 -= 0x5c
                edi_2 -= 0x5c
                i_3 = i_1
            while (var_d4 u< i_1)
            
            edi = var_d4
            cond:0_1 = i_1 != edi
            esi_1 = var_e0_1
            edx_5 = arg4
        
        if (cond:0_1)
            i_3 = i_1 - 0x5c
            
            if (esi_1 != edx_5)
                sub_4c0ec0(esi_1, i_1 - 0x5c)
                ebx = var_e4
                esi_1 += 0x5c
                i_1 = i_3
                edx_5 = arg4
                break
            
            i -= 0x5c
            
            if (i_1 - 0x5c != i)
                sub_4c0ec0(i_1 - 0x5c, i)
            
            ebx = var_e4 - 0x5c
            var_e4 = ebx
            sub_4c0ec0(i, ebx)
            i_1 = i_3
            edx_5 = arg4
        else
            if (esi_1 == edx_5)
                void* ecx_49 = var_e4
                *arg3 = i
                arg3[1] = ecx_49
                fsbase->NtTib.ExceptionList = ExceptionList
                sub_69a5bc(eax_2 ^ &var_e4)
                return arg3
            
            void* ebx_3 = var_e4
            
            if (ebx_3 != esi_1)
                int32_t xmm0_9 = *i
                int32_t xmm0_10 = i[1]
                sub_4bf370(&var_c0, &i[2])
                int32_t var_4_4 = 2
                *i = *ebx_3
                i[1] = *(ebx_3 + 4)
                i[2] = *(ebx_3 + 8)
                i[3] = *(ebx_3 + 0xc)
                
                if (&i[4] != ebx_3 + 0x10)
                    sub_401ff0(&i[4], ebx_3 + 0x10, 0, 0xffffffff)
                
                if (&i[0xa] != ebx_3 + 0x28)
                    sub_401ff0(&i[0xa], ebx_3 + 0x28, 0, 0xffffffff)
                
                void* eax_44
                eax_44.b = *(ebx_3 + 0x40)
                i[0x10].b = eax_44.b
                sub_4bf960(&i[0x11], ebx_3 + 0x44)
                sub_4a6db0(&i[0x14], ebx_3 + 0x50)
                int32_t eax_47 = var_c0
                *ebx_3 = xmm0_9
                *(ebx_3 + 4) = xmm0_10
                *(ebx_3 + 8) = eax_47
                *(ebx_3 + 0xc) = var_bc
                
                if (ebx_3 + 0x10 != &var_b8)
                    sub_401ff0(ebx_3 + 0x10, &var_b8, 0, 0xffffffff)
                
                if (ebx_3 + 0x28 != &var_a0)
                    sub_401ff0(ebx_3 + 0x28, &var_a0, 0, 0xffffffff)
                
                *(ebx_3 + 0x40) = var_88
                sub_4bf960(ebx_3 + 0x44, &var_84)
                sub_4a6db0(ebx_3 + 0x50, &var_78)
                int32_t var_4_5 = 0xffffffff
                sub_4b7cf0(&var_c0)
            
            var_e0_1 += 0x5c
            ebx = ebx_3 + 0x5c
            int32_t* i_2 = i
            var_e4 = ebx
            i = &i[0x17]
            int32_t xmm0_13 = *i_2
            int32_t xmm0_14 = i_2[1]
            void var_64
            sub_4bf370(&var_64, &i_2[2])
            int32_t var_4_6 = 3
            *i_2 = *esi_1
            i_2[1] = *(esi_1 + 4)
            i_2[2] = *(esi_1 + 8)
            i_2[3] = *(esi_1 + 0xc)
            
            if (&i_2[4] != esi_1 + 0x10)
                sub_401ff0(&i_2[4], esi_1 + 0x10, 0, 0xffffffff)
            
            if (&i_2[0xa] != esi_1 + 0x28)
                sub_401ff0(&i_2[0xa], esi_1 + 0x28, 0, 0xffffffff)
            
            int32_t* eax_55
            eax_55.b = *(esi_1 + 0x40)
            i_2[0x10].b = eax_55.b
            sub_4bf960(&i_2[0x11], esi_1 + 0x44)
            sub_4a6db0(&i_2[0x14], esi_1 + 0x50)
            *esi_1 = xmm0_13
            *(esi_1 + 4) = xmm0_14
            sub_4bf900(esi_1 + 8, &var_64)
            int32_t var_4_7 = 0xffffffff
            sub_4b7cf0(&var_64)
            esi_1 = var_e0_1
            i_1 = i_3
            edx_5 = arg4
            edi = var_d4
