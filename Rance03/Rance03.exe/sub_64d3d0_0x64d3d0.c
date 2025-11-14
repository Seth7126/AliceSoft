// 函数: sub_64d3d0
// 地址: 0x64d3d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4b38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg3
int32_t var_40 = arg2
char eax_6 = sub_40c250(arg4, &(*U"\n\n\t ")[1])
char eax_7

if (eax_6 == 0)
    eax_7 = sub_40c250(arg4, &(*U"\n\n\t ")[2])

int32_t* result_3
int32_t* result

if (eax_6 != 0 || eax_7 != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_402110(&var_2c, &(*U"\n\n\t ")[3], 1)
    int32_t var_4 = 0
    result = sub_64ba40(arg1 + 0x50, &var_2c, *(arg1 + 0x14))
    int32_t var_4_1 = 0xffffffff
    result_3 = result
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
        result = result_3
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
else
    result = sub_64ba40(arg1 + 0x50, arg4, *(arg1 + 0x14))
    result_3 = result

if (result != 0)
    void* i_1 = *(arg1 + 0x14)
    int32_t eax_10
    int32_t edx_1
    edx_1:eax_10 = sx.q(arg4[4] * i_1)
    int32_t j_2 = (eax_10 - edx_1) s>> 1
    
    if (var_40 s< 0)
        j_2 += var_40
        var_40 = 0
    
    if (esi s< 0)
        i_1 += esi
        esi = nullptr
    
    void* ecx_5 = arg1 + 0x20
    
    if (var_40 + j_2 s> (*(*(arg1 + 0x20) + 0x10))(eax_4))
        j_2 = (*(*(arg1 + 0x20) + 0x10))() - var_40
    
    result = (*(*(arg1 + 0x20) + 0x14))()
    
    if (esi + i_1 s> result)
        result = (*(*(arg1 + 0x20) + 0x14))()
        i_1 = result - esi
    
    if (j_2 s> 0 && i_1 s> 0)
        int32_t edx_2 = *(arg1 + 0x118)
        int32_t ecx_12
        
        if (edx_2 s>= esi || *(arg1 + 0x120) s<= esi + i_1)
            ecx_12 = 0
        else
            ecx_12 = 1
        
        char eax_21
        
        if (*(arg1 + 0x120) s>= esi || edx_2 s<= esi + i_1)
            eax_21 = 0
        else
            eax_21 = 1
        
        ecx_12.b |= eax_21
        int32_t edx_4 = var_40 - int.d(_mm_cvtepi32_pd(zx.q(j_2)) * -0.80000000000000004)
        int32_t edx_5 = *(arg1 + 0x118)
        int32_t eax_23
        
        if (*(arg1 + 0x114) s<= edx_4 && edx_5 s>= esi)
            eax_23 = esi + i_1
        
        char var_44_1
        int32_t eax_26
        
        if (*(arg1 + 0x114) s> edx_4 || edx_5 s< esi || edx_5 s> eax_23)
            eax_26 = *(arg1 + 0x120)
            var_44_1 = 0
        else
            eax_26 = *(arg1 + 0x120)
            
            if (*(arg1 + 0x11c) s< var_40 + j_2 || eax_26 s< esi || eax_26 s> eax_23)
                var_44_1 = 0
            else
                var_44_1 = 1
        
        ecx_12.b |= var_44_1
        int32_t edx_7 = *(arg1 + 0x118)
        char var_44_2
        
        if (*(arg1 + 0x114) s> edx_4 || edx_7 s< esi)
            var_44_2 = 0
        else
            int32_t edi_1 = esi + i_1
            
            if (edx_7 s> edi_1)
                var_44_2 = 0
            else
                var_44_2 = 1
                
                if (eax_26 s<= edi_1)
                    var_44_2 = 0
        
        ecx_12.b |= var_44_2
        int32_t edx_9 = var_40 + j_2
        int32_t edx_11 = *(arg1 + 0x118)
        int32_t ecx_13
        
        if (*(arg1 + 0x114) s>= edx_9 && edx_11 s>= esi)
            ecx_13 = esi + i_1
        
        char eax_27
        
        if (*(arg1 + 0x114) s< edx_9 || edx_11 s< esi || edx_11 s> ecx_13
                || *(arg1 + 0x11c) s> edx_4 || eax_26 s< esi || eax_26 s> ecx_13)
            eax_27 = 0
        else
            eax_27 = 1
        
        int32_t edx_14 = *(arg1 + 0x118)
        ecx_12.b |= eax_27
        char var_48_4
        int32_t eax_30
        
        if (*(arg1 + 0x114) s< edx_9 || edx_14 s< esi)
            eax_30 = *(arg1 + 0x120)
            var_48_4 = 0
        else
            eax_30 = *(arg1 + 0x120)
            
            if (edx_14 s> esi + i_1 || eax_30 s>= esi)
                var_48_4 = 0
            else
                var_48_4 = 1
        
        ecx_12.b |= var_48_4
        char eax_32
        
        if (edx_14 s>= esi)
            eax_32 = 0
        else
            edx_14 = *(arg1 + 0x118)
            
            if (*(arg1 + 0x11c) s< edx_9 || eax_30 s< esi || *(arg1 + 0x120) s> esi + i_1)
                eax_32 = 0
            else
                eax_32 = 1
        
        ecx_12.b |= eax_32
        int32_t eax_35
        
        if (edx_14 s> esi + i_1 && *(arg1 + 0x11c) s<= edx_4)
            eax_35 = *(arg1 + 0x120)
        
        char edx_16
        
        if (edx_14 s<= esi + i_1 || *(arg1 + 0x11c) s> edx_4 || eax_35 s< esi
                || eax_35 s> esi + i_1)
            edx_16 = 0
        else
            edx_16 = 1
        
        int32_t eax_36 = 0xffffffff
        
        if ((edx_16 | ecx_12.b) != 0)
            eax_36 = 0xffc8c8
        
        void* esi_1 = (*(*ecx_5 + 8))(var_40, esi)
        int32_t eax_40
        int32_t edx_18
        edx_18:eax_40 = sx.q((*(*ecx_5 + 0x1c))())
        void* edi_3 = (*(*result_3 + 0xc))(0, 0)
        result = (*(*result_3 + 0x20))() - j_2
        int32_t* result_1 = result
        
        if (i_1 s> 0)
            int32_t* result_4 = result_1
            result = (((eax_40 + (edx_18 & 3)) s>> 2) - j_2) << 2
            int32_t* result_2 = result
            void* i
            
            do
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        int32_t eax_48 = 0
                        
                        if (*edi_3 == 0)
                            eax_48 = eax_36
                        
                        edi_3 += 1
                        *esi_1 = eax_48
                        esi_1 += 4
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    result = result_2
                    result_4 = result_1
                
                esi_1 += result
                edi_3 += result_4
                i = i_1
                i_1 -= 1
            while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
