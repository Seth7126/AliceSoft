// 函数: sub_547c20
// 地址: 0x547c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

return (((zx.d((arg1 u>> 0x10).b) * zx.d((arg2 u>> 0x10).b) u/ 0xff)
    | ((arg1 u>> 0x18) * (arg2 u>> 0x18) u/ 0xff) << 8) << 8
    | (zx.d((arg1 u>> 8).b) * zx.d((arg2 u>> 8).b) u/ 0xff)) << 8
    | (zx.d(arg1.b) * zx.d(arg2.b) u/ 0xff)
