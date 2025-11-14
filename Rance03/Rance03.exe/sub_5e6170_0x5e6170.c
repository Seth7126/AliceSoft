// 函数: sub_5e6170
// 地址: 0x5e6170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((**(arg1 + 0x1c8))() != 0 || *(arg1 + 0x48) s<= 0 || *(arg1 + 0x4c) s<= 0)
    return DefWindowProcA(arg2, 0x214, arg3, arg4)

int32_t eax_3 = arg4[2]
int32_t edi = *arg4
int32_t esi = arg4[1]
int32_t ebx_1 = arg4[3]
int32_t var_8 = edi
arg2 = eax_3
int32_t var_18 = eax_3
int32_t var_4 = esi
int32_t var_14 = ebx_1
int32_t eax_4 = GetSystemMetrics(SM_YVIRTUALSCREEN)

if (esi s< eax_4)
    int32_t ecx_2 = eax_4 - esi
    esi = eax_4
    ebx_1 += ecx_2
    var_4 = esi
    var_14 = ebx_1

int32_t eax_5 = GetSystemMetrics(SM_XVIRTUALSCREEN)
int32_t eax_6 = arg2

if (edi s< eax_5)
    int32_t ecx_4 = eax_5 - edi
    edi = eax_5
    eax_6 += ecx_4
    var_8 = edi
    arg2 = eax_6
    var_18 = eax_6

int32_t var_10
int32_t var_c
sub_5e5250(eax_6, ebx_1 - esi, eax_6 - edi, &var_10, &var_c)
int32_t edx_11
int32_t var_44_1
int32_t var_40_1
bool var_3c_1
int32_t* var_38_1
int32_t* var_34_1
int32_t* var_30_1
int32_t* var_2c_1
int32_t ebx_2

if (*(arg1 + 0x3c) != 0 || *(arg1 + 0x3d) != 0 || arg3 - 1 u> 7)
    edx_11 = arg2
else
    switch (arg3)
        case 1, 2
            int32_t esi_1 = var_10
            int32_t temp0_1 = divs.dp.d(sx.q(*(arg1 + 0x4c) * esi_1), *(arg1 + 0x48))
            var_2c_1 = &var_14
            var_30_1 = &var_4
            ebx_2 = ebx_1 + temp0_1 - var_c
            var_34_1 = &var_18
            var_38_1 = &var_8
            var_3c_1 = arg3 == 1
            var_40_1 = temp0_1
            var_44_1 = esi_1
        label_5e6289:
            var_14 = ebx_2
            sub_5e6630(arg1, var_44_1, var_40_1, var_3c_1, var_38_1, var_34_1, var_30_1, var_2c_1)
            edi = var_8
            esi = var_4
            ebx_1 = var_14
            edx_11 = var_18
        case 3, 6
            int32_t esi_2 = var_c
            int32_t temp0_2 = divs.dp.d(sx.q(*(arg1 + 0x48) * esi_2), *(arg1 + 0x4c))
            var_18 = arg2 + temp0_2 - var_10
            sub_5e66a0(arg1, esi_2, temp0_2, arg3 == 3, &var_8, &var_18, &var_4, &var_14)
            edi = var_8
            esi = var_4
            ebx_1 = var_14
            edx_11 = var_18
        case 4
            int32_t ecx_32 = var_10
            int32_t temp0_13 = divs.dp.d(sx.q(*(arg1 + 0x4c) * ecx_32), *(arg1 + 0x48))
            int32_t eax_89 = var_c
            
            if (temp0_13 s< eax_89)
                int32_t temp0_14 = divs.dp.d(sx.q(eax_89 * *(arg1 + 0x48)), *(arg1 + 0x4c))
                *(arg1 + 0x4c)
                edi += ecx_32 - temp0_14
                int32_t eax_93 = GetSystemMetrics(SM_CXMAXTRACK)
                var_4 = eax_93
                
                if (arg2 - edi s<= eax_93)
                    goto label_5e641b
                
                esi += var_c - divs.dp.d(sx.q((eax_93 - arg2 + temp0_14 + edi) * *(arg1 + 0x4c)), 
                    *(arg1 + 0x48))
                goto label_5e6415
            
            esi += eax_89 - temp0_13
            int32_t eax_101 = GetSystemMetrics(SM_CYMAXTRACK)
            var_4 = eax_101
            
            if (ebx_1 - esi s> eax_101)
                *(arg1 + 0x4c)
                edi += var_10 - divs.dp.d(
                    sx.q((eax_101 - ebx_1 + temp0_13 + esi) * *(arg1 + 0x48)), *(arg1 + 0x4c))
                esi = ebx_1 - var_4
            
            int32_t eax_108 = GetSystemMetrics(SM_YVIRTUALSCREEN)
            
            if (esi s< eax_108)
                int32_t ecx_41 = eax_108 - esi
                esi = eax_108
                ebx_1 += ecx_41
            
            edx_11 = arg2
        case 5
            int32_t temp0_10 = divs.dp.d(sx.q(*(arg1 + 0x4c) * var_10), *(arg1 + 0x48))
            *(arg1 + 0x48)
            int32_t eax_71 = var_c
            
            if (temp0_10 s>= eax_71)
                esi += eax_71 - temp0_10
                int32_t eax_76 = GetSystemMetrics(SM_CYMAXTRACK)
                var_4 = eax_76
                
                if (ebx_1 - esi s> eax_76)
                    *(arg1 + 0x4c)
                    arg2 += divs.dp.d(sx.q((eax_76 - ebx_1 + temp0_10 + esi) * *(arg1 + 0x48)), 
                        *(arg1 + 0x4c)) - var_10
                    esi = ebx_1 - var_4
                
                int32_t eax_84 = GetSystemMetrics(SM_YVIRTUALSCREEN)
                edx_11 = arg2
                
                if (esi s< eax_84)
                    int32_t ecx_31 = eax_84 - esi
                    esi = eax_84
                    ebx_1 += ecx_31
            else
                int32_t temp0_11 = divs.dp.d(sx.q(eax_71 * *(arg1 + 0x48)), *(arg1 + 0x4c))
                var_18 = arg2 + temp0_11 - var_10
                sub_5e66a0(arg1, var_c, temp0_11, 1, &var_8, &var_18, &var_4, &var_14)
                edi = var_8
                esi = var_4
                ebx_1 = var_14
                edx_11 = var_18
        case 7
            int32_t ecx_18 = var_10
            int32_t temp0_7 = divs.dp.d(sx.q(*(arg1 + 0x4c) * ecx_18), *(arg1 + 0x48))
            int32_t edx_17 = var_c
            
            if (temp0_7 s>= edx_17)
                ebx_2 = ebx_1 + temp0_7 - edx_17
                var_2c_1 = &var_14
                var_30_1 = &var_4
                var_34_1 = &var_18
                var_38_1 = &var_8
                var_3c_1 = true
                var_40_1 = temp0_7
                var_44_1 = ecx_18
                goto label_5e6289
            
            int32_t temp0_8 = divs.dp.d(sx.q(*(arg1 + 0x48) * edx_17), *(arg1 + 0x4c))
            *(arg1 + 0x4c)
            edi += ecx_18 - temp0_8
            int32_t eax_57 = GetSystemMetrics(SM_CXMAXTRACK)
            var_4 = eax_57
            
            if (arg2 - edi s<= eax_57)
                goto label_5e641b
            
            *(arg1 + 0x48)
            ebx_1 +=
                divs.dp.d(sx.q((eax_57 - arg2 + temp0_8 + edi) * *(arg1 + 0x4c)), *(arg1 + 0x48))
                - var_c
        label_5e6415:
            edi = arg2 - var_4
        label_5e641b:
            int32_t eax_65 = GetSystemMetrics(SM_XVIRTUALSCREEN)
            
            if (edi s< eax_65)
                int32_t ecx_23 = eax_65 - edi
                edi = eax_65
                arg2 += ecx_23
            
            edx_11 = arg2
        case 8
            int32_t ecx_13 = var_c
            int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x4c) * var_10), *(arg1 + 0x48))
            *(arg1 + 0x48)
            
            if (temp0_3 s>= ecx_13)
                ebx_1 += temp0_3 - ecx_13
                int32_t eax_41 = GetSystemMetrics(SM_CYMAXTRACK)
                var_4 = eax_41
                
                if (ebx_1 - esi s> eax_41)
                    *(arg1 + 0x4c)
                    arg2 += divs.dp.d(sx.q((eax_41 - ebx_1 + temp0_3 + esi) * *(arg1 + 0x48)), 
                        *(arg1 + 0x4c)) - var_10
                    ebx_1 = var_4 + esi
                
                edx_11 = arg2
            else
                int32_t temp0_4 = divs.dp.d(sx.q(*(arg1 + 0x48) * ecx_13), *(arg1 + 0x4c))
                *(arg1 + 0x4c)
                arg2 += temp0_4 - var_10
                int32_t eax_32 = GetSystemMetrics(SM_CXMAXTRACK)
                edx_11 = arg2
                var_4 = eax_32
                
                if (edx_11 - edi s> eax_32)
                    ebx_1 += divs.dp.d(sx.q((eax_32 - edx_11 + temp0_4 + edi) * *(arg1 + 0x4c)), 
                        *(arg1 + 0x48)) - var_c
                    edx_11 = var_4 + edi
int32_t* eax_109 = arg4
*eax_109 = edi
eax_109[1] = esi
eax_109[3] = ebx_1
eax_109[2] = edx_11
return 1
