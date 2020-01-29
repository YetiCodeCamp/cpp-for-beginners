---
title: VirtualBox - Windows 10
permalink: /vb-win10
---

## This is the companion page for the VirtualBox Windows 10 Video


The video and this guide will walk you through step-by-step of setting up a VirtualBox Virtual Machine on your computer and using it to install a fresh Windows 10 VM installation.

Before we start, I want to quickly go over a few items.

To follow along with this guide you should have a HDD (SSD preferred) with at least 200 GB free, but more is better. Alternatively, you could use an external drive with similar free capacity, it will be a bit slower but still workable.

If you do not already have a Windows ISO image file, you will also need a high speed Internet connection as we will be downloading a ~4 GB Windows ISO image file.

Finally, if you wish to make your Windows 10 VM a more permanent installation, you will also need to have a valid Windows 10 Product key. This is optional as you can also take a snapshot of your finished VM install and simply revert back to its initial state once the grace period is over.

There are also a few terms I wish to clarify: VM, VB, host system and guest system.

- VM is short for Virtual Machine, a general term describing a computer environment that is virtualized.

- VB is short for the VirtualBox software we are using to create and run our VM (Virtual Machines).

- The ‘host system’ is the physical PC you are probably using right now that you intend to install the VB software on to run the virtual guest machine.

- The ‘guest system’ then is the Virtual Machine that you will be running within the VB software, in this case the virtual Windows 10 system.

### Download Windows 10 ISO

To begin we will need to get a Windows 10 ISO image.

Go to https://www.microsoft.com/en-us/software-download/windows10.

<br/><br/>
<p align="center">
<img width="1000" height="603" src="images\videos\VirtualBox\Windows10_Download_Tool.jpg" title="Windows 10 Download Tool">
</p>
<br/><br/>

Under the Create Windows 10 installation media section, click on Download tool now.

<br/><br/>
<p align="center">
<img width="600" height="265" src="images\videos\VirtualBox\Windows10_Download_Dialog.jpg" title="Confirm Download Dialog">
</p>
<br/><br/>

You should get a popup asking you to save the file, go ahead and click on Save File.

Once the file has downloaded, open up you downloads folder and double click on the MediaCreationToolxxxx.exe to begin installation of the tool.

Note the xxxx is the current version of Windows that the tool will download, and its value will change over time. As of this writing it is version 1909.

Click on Yes to allow the app to make changes to your system if Windows prompts you to do so.

A dialog will appear for a few moments as it set things up. After a little while the license agreement will appear.

<br/><br/>
<p align="center">
<img width="700" height="556" src="images\videos\VirtualBox\Windows10_License.jpg" title="License Agreement">
</p>
<br/><br/>

Click on Accept if you accept the terms of the agreement.

Again, you may get a brief pause as the tool sets a few more things up.

<br/><br/>
<p align="center">
<img width="700" height="554" src="images\videos\VirtualBox\Windows10_Download_Choose.jpg" title="Choose Installation Method Dialog">
</p>
<br/><br/>

After a little pause, you will get a screen asking “What do you want to do?”

Here it is important that you choose the second option “Create installation media”.

Double check to make sure you chose the Create installation media option and click on Next.

<br/><br/>
<p align="center">
<img width="700" height="553" src="images\videos\VirtualBox\Windows10_Select_lang.jpg" title="Select Language">
</p>
<br/><br/>


By default your Language, Edition and Architecture should be selected. If you uncheck the use recommend settings option for this PC checkbox you can change these values if you need to.

Click on Next.

<br/><br/>
<p align="center">
<img width="700" height="552" src="images\videos\VirtualBox\Windows10_Select_Media.jpg" title="Select Media">
</p>
<br/><br/>

On the Choose which media to use select ISO file, as this will be the image we will use for our VirtualBox installation.

Click on Next.

Choose a location to store the ISO image, ensure the location you choose has plenty of room. The ISO image is around 4.2 GB as of this writing.  You can use the default name Windows.iso and click on Save.

<br/><br/>
<p align="center">
<img width="700" height="552" src="images\videos\VirtualBox\Windows10_Downloading.jpg" title="Windows 10 Download Tool">
</p>
<br/><br/>

The image will begin the downloading process, depending on your Internet connection it may take some time.

<br/><br/>
<p align="center">
<img width="700" height="551" src="images\videos\VirtualBox\Windows10_Finish.jpg" title="Windows 10 Download Tool Finish">
</p>
<br/><br/>

Once the download has completed you will see the Burn ISO file to DVD finish screen. Since we are just interested in the ISO image for our VB install, you just go ahead and click finish.

While you can burn the image to a DVD if you so choose, if you want a copy of Windows for re-imaging a physical machine, you would be better served running the tool again and choosing a USB image.

### Download and Install VirtualBox Software
