# VxLang

<div align="center">
   <a href="https://vxlang.github.io/">
      <img src="https://vxlang.github.io/image/vxlang.gif" loop=infinite style="max-width: 100%; height: auto;" />
   </a>
</div>
<br>

- [BLOG](https://vxlang.github.io/)

---

## What is vxlang?

**VXLANG** is a project designed to prevent reverse-engineering behaviors such as static or dynamic analysis, file tampering, and unauthorized access to memory by attackers. 

The vxlang project currently targets x86-64 system and .Net binaries, native binary files for the Microsoft Windows operating system, including executables with the ".exe" extension, dynamic link library files with the ".dll" extension, and kernel driver files with the ".sys" extension. (The types of target binaries supported by vxlang will be expanded in future updates).

## Virtualization Preview

<div align="center">
   <p>Before</p>
   <img src="https://vxlang.github.io/image/VMBegin.png" style="max-width: 100%; height: auto;" />
   <p>After</p>
   <img src="https://vxlang.github.io/image/VMEnd.png" style="max-width: 100%; height: auto;" />
</div>

## Obfuscation Preview

<div align="center">
   <p>Before</p>
   <img src="https://vxlang.github.io/image/bef.PNG" style="max-width: 100%; height: auto;" />
   <p>After IDA</p>
   <img src="https://vxlang.github.io/image/cff-1-1.png" style="max-width: 50%; height: auto;" /> 
   <img src="https://vxlang.github.io/image/cff-1-2.png" style="max-width: 50%; height: auto;" /> 
</div>

## Precautions

- `Optimization` : Verify that VxVirtualizationBegin and VxVirtualizationEnd are in the same block.  
  If procedures are merged due to code optimization, problems may arise.
- `switch-case` : In the switch-case, when the branch movement is not an IMM value, it may be moved to the original position.
- `Exception handling` : Currently, the virtual CPU does not support exception handling.
  
## Deploying the full version

The full version of VxLang is developed and operated under donation through Patreon. The exact usage of VxLang and sharing of extension module code, new features of VxLang, etc. will be shared. If you have any questions, please send your request to the email below.

- E-Mail: 0x999h@gmail.com
- Full Version
  - You can control all features of the VxLang protector.
  - Support for virtual CPUs with specialized CPU contexts.
- [Patreon](https://www.patreon.com/vxlang)
  - [VxLang Guidelines](https://www.patreon.com/posts/vxlang-93493825) 

## Latest Version

- [Download](https://vxlang.github.io/download.html)
  - Demo: ver.1.2.1.0
  - Full: Latest version
 
1.0.0
---
- `1.3.0.0`
  - Added a new packing type, which is different from the existing packer and only allows you to activate cores. It is enabled in test mode in this version..
  - Fixed to be able to compile to specific sections in the Virtualizer's linker.
- `1.2.9.0`
  - The virtual machine section and the obfuscated code section are merged.
  - Speed up obfuscation conversion and packing.
- `1.2.8.0`
  - fixed bug of axion-mode and feature additions.
    - I've started improving AXION mode, which performs additional protective behaviors beyond the existing protections :)
  - Speed up obfuscation conversion and packing.
- `1.2.7.0`
  - Simplified the flattening SDK: VxLang no longer supports the API to adjust the difficulty level.
  - Flattening difficulty is now applied randomly at the function level.
  - Optimize the speed of VxLang behavior
  - I'll work on getting it to work faster with games and heavy software testing :)
- `1.2.6.0`
  - Optimized code-conversion speed 
  - Fixed minor-bug: Unnecessary log

## TODO
- `Task`
  - Add ELF32/64 format for x86-64
  - Add code obfuscation methods for x86-64
    - Once the above steps are complete, add the ARM system for the ELF file format.
    
---

## Special Thanks

Thank you to everyone who helped with the development.

- [2GG](https://twitter.com/2gg) 
- [kao](https://lifeinhex.com/) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213340) 
- [Extreme Coders](https://github.com/extremecoders-re/tuts4you_users_desktop_crackme_writeup) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213328)  
- [clavis0x](https://github.com/clavis0x)
- [tybins99](https://github.com/tybins99) 
- [EBalloon](https://github.com/EBalloon)
- [Aiden](https://github.com/aidenosys)
  - Lots of Bug reporting
- [YoavLevi](https://github.com/YoavLevi)
  - Bug reporting and testing sample code & binary support
- [mikSn](https://github.com/mikSn)
  - Bug reporting
- [Jae Hoon Ahn](https://github.com/dkswognsdi)
  - Vulnerability Reports and Sharing.
- [LOLSHAN](https://github.com/LOLSHAN)
  - Feature review and optimization improvements, many technical advice
  - Bug Reporting
- [itskian](https://github.com/itskian)
  - Share technical advice and improvement ideas

  
  
  
