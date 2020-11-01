# Übungsaufgabe Nr. 1

Bevor Sie mit der Bearbeitung der ersten Übungsaufgabe starten wollen wir zunächst Ihre ``git`` Kenntnisse vertiefen. Im letzten Vorlesungblock haben Sie das Konzept der verschiedenen remotes kennengelernt. Dies wollen wir nun vertiefen. Am Ende verfügt Ihre lokale Arbeitskopie über mindestens zwei remotes. Aber zunächst alles der Reihe nach.

**WICHTIG:** Diese Übungsaufgabe soll einzeln und nicht in Gruppen erfolgen.

## Konfliktfrei

Aller Anfang ist schwer. Um sich das Leben nicht unnötig schwer zu machen sollten Sie den master Branch zunächst nicht ändern und jeweils immer nur die Änderungen aus dem allgemeinen Repository pullen. Das klare Ziel am Anfang ist es keine Konflikte zu provozieren.

## Anlegen eines Forks

Damit die Übungsaufgabe von Ihnen bearbeitet werden kann müssen Sie diese zunächst in Ihr eigenes Profil übertragen. Dieser Vorgang bezeichnet man als ``fork`` in GitLab kann dies mit Hilfe der [Web-GUI erledigt werden](https://docs.gitlab.com/ee/user/project/repository/forking_workflow.html#creating-a-fork). Dabei müssen Sie sich entscheiden ob Sie ``repository mirroring`` verwenden möchten oder nicht. Da wir den Umgang mit den remotes üben wollen verzichten wir auf dieses Feature.

Sollten Sie bereits das Projekt TFE19-2 geklont haben so können Sie es entweder löschen oder händich den ``upstream`` remote hinzufügen siehe (Upstream hinzufügen)


### Repository klonen

Zum Klonen Ihres Projektes welches mittels Fork vom Kurs-Projekt abgespalten wurde müssen Sie die clone URL aus dem Web-Interface kopieren diese lautet im folgenden Beispiel ``<projet url>`` Damit Sie nicht versehentlich vom falschen Projekt klonen.

```
git clone <projet url>
```

### Upstream hinzufügen

Bei Verwendung von ``SSH`` geschieht dies wie folgt:

```
cd tfe19-2
git remote add upstream git@gitlab.com:graugans/tfe19-2.git
```

Sollten Sie allen Empfehlungen zum Trotz trotzdem ``HTTPS`` verwenden so geschieht dies wie folgt

```
cd tfe19-2
git remote add upstream https://gitlab.com/graugans/tfe19-2.git
```

Nach erfolgreichem hinzufügen des ``upstream`` Projektes können Sie Ihre Datenbank aktualisieren:

```
git fetch --all
```

Nun sollte Ihr Projekt in etwa so aussehen:

```
git remote -v
origin  git@gitlab.com:graugans/tfe19-2-gg.git (fetch)
origin  git@gitlab.com:graugans/tfe19-2-gg.git (push)
upstream        git@gitlab.com:graugans/tfe19-2.git (fetch)
upstream        git@gitlab.com:graugans/tfe19-2.git (push)
```
**ACHTUNG:** Prüfen Sie ob ``origin`` Ihrer projekt URL entspricht! In dieser darf ``graugans`` nicht auftauchen!


## Anlegen der Branches

Bevor Sie anfangen Quellcode zu schreiben erzeugen sie zunächst eine Kopie des Branches für die erste Übungsaufgabe.

```
git checkout -b exercise-001 upstream/exercise-001
```

Sie können mit dem Kommando ``git branch -a`` prüfen ob dies erfolgreich war:

```
  master
* exercise-001
  remotes/origin/HEAD -> origin/master
  remotes/origin/master
  remotes/upstream/master
```
Damit Sie nicht ausversehen in das falsche Repository pushen müssen Sie git mitteilen, dass Sie ab jetzt in Ihren fork pushen wollen:

```
git push -u origin exercise-001
```

Nun haben Sie den branch ``exercise-001`` aus meinem Repository in Ihren Fork übertragen.

Damit Sie nach getaner Arbeit einen Pull-Request erstellen können und mich als Reviewer hinzufügen können benötigen wir einen weiteren Branch mit dem Namen ``solution-001``

```
git checkout -b solution-001 origin/exercise-001
```

Ihre Branches sollten nun wie folgt aussehen ``git branch -a``

```
  master
  exercise-001
* solution-001
  remotes/origin/HEAD -> origin/master
  remotes/origin/master
  remotes/origin/exercise-001
  remotes/upstream/master
  remotes/upstream/exercise-001
```


## Der erste Commit

Um den ``git Workflow`` zu testen korrigieren Sie zunächst den [Schreibfehler in Zeile 11](https://gitlab.com/graugans/tfe19-2/-/blob/master/exercise-001/main.cpp#L11).

### Änderungen in den Staging Bereich aufnehmen

Zum hinzufügen der Änderungen in den Staging Bereich nutzen Sie das Kommando ``git add -p``

### Übertragen der Änderungen in das lokale Repository

Das Übertragen oder auch ``commit`` genannt wird mit dem Kommando ``git commit`` durchgeführt. Sollte eine kurze commit Nachricht ausreichen können Sie dies direkt auf der Kommandozeile durchführen.

```
git commit -m "Fix typo in exercise-001"
```

### Übertragen der Änderungen in Ihren Fork

Damit diese Änderungen in Ihrem eigenen Fork sichtbar sind müssen diese gepusht werden.

```
git push -u origin solution-001
```

Nach der Übertragung können Sie im Web-Interface testen ob diese Änderung erfolgreich übernommen wurden.

### Erstellen eines Merge Requests zum Hauptrepository

Um die eigenen Änderungen zum Hauptrepository vorzuschlagen (zum Review geben) kann man einen Merge Request erstellen.
Dort kann dan der Dozent als Reviewer fungieren und die vorgeschlagenen Änderungen kommentieren, und die andere Kursteilnehmer können Änderungen und Kommentare auch sichten und ggf. darauf lernen.


# Aufgabenstellung

## Parameterraum

Ändern Sie die Datei [main.cpp](https://gitlab.com/graugans/tfe19-2/-/blob/b7cfb148906b6d20bc52bc0471c5b70c0e78deeb/exercise-001/main.cpp) so ab, dass Sie einen Parameter ``count`` wie Kommandozeile ``-c,--count`` übergeben können. Sollte kein Parameter angegeben sein so ist der Standardwert mit 20 festzusetzen.

Erstellen Sie anschließend einen Commit und pushen diesen in Ihr ``origin``

## Den Zufall einordnen

Erstellen Sie einen ``std::vector`` mit der Größe von ``count`` und füllen diesen mit zufälligen Werten von 1-100.

Erstellen Sie anschließend einen Commit und pushen diesen in Ihr ``origin``

## Zeig es mir Baby

Damit Sie den Zufall kennen müssen Sie Ihn ausgeben können. Verwenden Sie hierzu die ``{fmt}`` Bibliothek und erstellen Sie eine Funktion um den Vektor auszugeben.

Erstellen Sie anschließend einen Commit und pushen diesen in Ihr ``origin``

## Der Zufall in geordneten Bahnen

Sortieren Sie nun den Vector der Reihe nach. Das heißt die niedrigste Zahl zuerst. Das Ergebnis soll ebenfalls ausgegeben werden.

Erstellen Sie anschließend einen Commit und pushen diesen in Ihr ``origin``


## Strava für Vektoren

Damit Sie sich mit Ihren Kollegen messen können interessiert Sie nur eine Sache. Geschwindigkeit. Wie schnell wurde der Vektor sortiert. Dazu nutzen Sie die Funktionen der Bibliothek ``std::chrono``

```cpp
auto start = std::chrono::system_clock::now();

/* do some work */

auto end = std::chrono::system_clock::now();
auto elapsed = end - start;
```

Vermutlich wird Ihr Rechner diese Aufgabe durchaus unter einer Sekunde lösen. Das heißt Sie müssen Ihn entweder mehr fordern oder eine andere Zeitbasis wählen.

```cpp
// this constructs a duration object using milliseconds
auto elapsed =
    std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
```
Sie haben es erfasst die Ergebnisse sind wieder mit ``{fmt}`` auszugeben.

Erstellen Sie anschließend einen Commit und pushen diesen in Ihr ``origin``

## Nach getaner Arbeit

Haben Sie alle Punkte erfolgreich abgearbeitet erstellen Sie einen Pull-Request in Ihrem Fork und fügen mich ``graugans`` als Approval hinzu.

# Lernziele

- Vertiefung der git Kenntnisse
- Erste Schritte mit CMake
- Umgang mit Vektoren
- Umgang mit der CLI11
- Umgang mit der ``{fmt}`` Bibliothek
- Anwenden der [Algorithms library](https://en.cppreference.com/w/cpp/algorithm)
- Zeitmessung mit ``std::chrono``