# Buon(G.I)orno Sample and Gem for O3DE

![BuonGIorno_Screenshot](https://user-images.githubusercontent.com/10916957/195835333-f1b4c2a8-e07b-4b2a-bc01-1b418bb969d2.png)

Buon(G.I.)orno is the stylized representation of a small italian village. The main purpose of this graphics demo is to showcase what it's possible to achieve thanks to Ray-Traced Global Illumination in a mobile-friendly game environment.

## Download and Install

### 1. Clone the repository

You can clone the gems to any folder locally, including inside the engine folder. If you clone to a folder inside an existing Git repository (e.g. o3de) you should add the folder to the Git exclude file for the existing repository.

#### Cloning into a folder outside the engine repository folder (Recommended) 

```shell
# navigate to the desired directory (outside your engine repository folder) and clone the project 
> git clone https://github.com/o3de/buongiorno-sample.git
Cloning into 'buongiorno-sample'...
```

#### Cloning into the engine repository folder

```shell
# clone the project in your existing engine repository folder
> git clone https://github.com/o3de/buongiorno-sample.git c:/path/to/o3de/buongiorno-sample
Cloning into 'buongiorno-sample'...
```

```shell
# Add the project folder to the engine git exclude file
> echo buongiorno-sample > c:/path/to/o3de/.git/info/exclude
```

### 2. Register the engine, project and gems

```shell
# register the engine (If you already built O3DE in project-centric mode then you don't need this step.)
> c:/path/to/o3de/scripts/o3de register --this-engine

# register the project 
> c:/path/to/o3de/scripts/o3de register -pp c:/path/to/buongiorno-sample/Project

# register the gem (OPTIONAL) - Only needed if you plan to use the gem from another project. 
> c:/path/to/o3de/scripts/o3de register -gp c:/path/to/buongiorno-sample/Gems/buongiorno
```

You are now setup to use these gems in your projects.

## License

For terms please see the LICENSE*.TXT files within this distribution.
