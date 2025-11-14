// 函数: sub_5eedf0
// 地址: 0x5eedf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_6b1380(mxcsr, x87control, fconvert.d(fconvert.t(*(arg4 + 0x10))))
int32_t esi = int.d(fconvert.t(fconvert.s(st0)))
int16_t x87control_2
long double st0_1
st0_1, x87control_2 = sub_6b1380(mxcsr, x87control_1, fconvert.d(fconvert.t(*(arg4 + 0x14))))
int32_t eax = int.d(fconvert.t(fconvert.s(st0_1)))

if (esi s> eax)
    eax = esi

int32_t eax_1 = eax * 2
int32_t edx_1 = arg3 - eax_1
int32_t ecx_1 = arg2 - eax_1
double var_88_1
var_88_1:4.d = edx_1
var_88_1.d = ecx_1

if (sub_5eefc0(arg1, var_88_1) != 0 && sub_5ef150(arg1) != 0)
    int16_t x87control_3
    long double st0_2
    st0_2, x87control_3 = sub_6b1380(mxcsr, x87control_2, fconvert.d(fconvert.t(*(arg4 + 0x10))))
    double var_88_2
    var_88_2:4.d = sub_6b1250(st0_2)
    var_88_2.d = edx_1
    
    if (sub_5f0c50(arg1 + 0x4c, ecx_1, var_88_2) != 0)
        int16_t x87control_4
        long double st0_3
        st0_3, x87control_4 =
            sub_6b1380(mxcsr, x87control_3, fconvert.d(fconvert.t(*(arg4 + 0x10))))
        void var_90
        char eax_8
        
        if (int.d(fconvert.t(fconvert.s(st0_3))) s> 0)
            double var_88_3
            var_88_3.d = *(arg4 + 0x10)
            eax_8, x87control_4 = sub_5f0d20(arg1 + 0x4c, arg1 + 0xc, var_90)
        
        if (int.d(fconvert.t(fconvert.s(st0_3))) s<= 0 || eax_8 != 0)
            int16_t x87control_5
            long double st0_4
            st0_4, x87control_5 =
                sub_6b1380(mxcsr, x87control_4, fconvert.d(fconvert.t(*(arg4 + 0x14))))
            double var_88_4
            var_88_4:4.d = sub_6b1250(st0_4)
            var_88_4.d = edx_1
            
            if (sub_5f0c50(arg1 + 0x94, ecx_1, var_88_4) != 0)
                int32_t eax_11 = int.d(fconvert.t(fconvert.s(sub_6b1380(mxcsr, x87control_5, 
                    fconvert.d(fconvert.t(*(arg4 + 0x14)))))))
                double var_88_5
                char eax_13
                
                if (eax_11 s> 0)
                    var_88_5.d = *(arg4 + 0x14)
                    eax_13 = sub_5f0d20(arg1 + 0x94, arg1 + 0xc, var_90)
                
                if (eax_11 s<= 0 || eax_13 != 0)
                    var_88_5:4.d = 0x20
                    var_88_5.d = arg3
                    int32_t* result
                    int32_t edx_2
                    result, edx_2 = (*(**(arg1 + 4) + 8))(arg2, var_88_5)
                    
                    if (result != 0)
                        var_88_5:4.d = arg4
                        var_88_5.d = result
                        
                        if (sub_5ef260(result, edx_2, arg1, var_88_5) != 0)
                            return result
                        
                        (*(*result + 4))()

return 0
